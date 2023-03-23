#include<iostream>
using namespace std;

class Circle 
{
    private:
    float radious;
    float area;

    public:
    void setRadious(float x)
    { radious=x;}
    float getArea()
    {
        return 3.14*radious*radious;
    }
    float getRadious()
    {
        return radious;
    }
    void calculateArea()
    {
        area=3.14*radious*radious;
    }
};


int main()
{
    Circle c;
    c.setRadious(3.14);
    c.calculateArea();
    cout<<"area of circle is "<<c.getArea();
    return 0;
}