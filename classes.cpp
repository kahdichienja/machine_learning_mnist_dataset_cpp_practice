#include <iostream>
#include <string>

using namespace std;


class Person
{
private:
    std::string name;
    int age;
public:
    Person(std::string n, int a): name(n), age(a){};

    string getname() {return name;};
    int getage() {return age;};

    void setAge(int a){
        this->age = a;
    }
    void setname(string n){
        this->name = n;
    }

    void toString(){
        std::cout << "Person(name: " <<this->name << ", age: " <<this->age << ")";
    }

};



int main()
{

    Person p("Jane", 20);

    p.setname("Jane Doe Smith");

    p.toString();


    return 0;
}
