#include <iostream>
#include <string>
#include "httplib.h"
#include "json.hpp"
using namespace std;
using json = nlohmann::json;

struct UserModel
{
    int id;
    string name;
    string username;
    string email;


    static UserModel fromJson(const json& userdata){

        UserModel user;

        user.id = userdata["id"];
        user.name = userdata["name"];
        user.username = userdata["username"];
        user.email = userdata["email"];

        return user;
    }

    json toJson() const {
        return {
            {"id", id},
            {"name", name},
            {"username", username},
            {"email", email},
        };
    }
};

struct ErrorModel{
    int code;
    string message;
};

std::pair<UserModel, ErrorModel> getUserData() {

    httplib::Client client("https://jsonplaceholder.typicode.com");

    auto response = client.Get("/users");

    if (response && response->status == 200)    
    {
        try
        {
            json jsondata = json::parse(response->body);
            if (!jsondata.empty())
            {
                UserModel user = UserModel::fromJson(jsondata);

                return {user, ErrorModel()};
            }else  return {UserModel(), {404, "No user data found"}};
            
        }
        catch(const json::parse_error& e)
        {
            return {UserModel(), {500, "Error parsing JSON: "+ string(e.what())}};
        }
        
    }else
    {
        return {UserModel(), {response ? response->status : -1, "Network error"}};
    }

}


int main()
{
    auto [user, error] = getUserData();

    if (error.code != 0)
    {
        std::cerr << "Error code: " << error.code << ", Message: " << error.message << std::endl;
    }else
    {
        // Use user data
        std::cout << "User ID: " << user.id << ", Name: " << user.name << std::endl;

        json userJson = user.toJson();

        std::cout << "User JSON: \n"<< userJson.dump(4) << std::endl; 
    }
    
    
    return 0;
}
