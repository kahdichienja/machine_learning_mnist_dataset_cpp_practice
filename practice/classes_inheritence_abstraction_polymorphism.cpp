#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape
{

public:
   virtual double getArea() const = 0;
};

class Rectangle: public Shape
{
private:
    double lenght;
    double width;
public:
    Rectangle(double l, double w): lenght(l), width(w){};

    double getArea() const override {
        return this->lenght * this->width;
    }
};

class Circle: public Shape
{
private:
    double radius;

public:
    Circle(double r): radius(r){};

    double getArea() const override {
        return M_PI * pow(this->radius, 2);
    }
};




int main()
{


    Circle c(7);
    Rectangle r(4,5);

    Shape* shape1 = &c;
    Shape* shape2 = &r;

    cout << "Area of Circle: " << shape1->getArea() << endl;
    cout << "Area of Rectangle: " << shape2->getArea() << endl;



    return 0;
}
