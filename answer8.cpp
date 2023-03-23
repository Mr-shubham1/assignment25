#include<iostream>
using namespace std;

class Rectangle
{
    private:
    float length;
    float breadth;
    float area;

    public:
    void setLength(float x){length=x;}
    void setBreadth(float x){breadth=x;}

    float getLength(){return length;}
    float getBreadth(){return breadth;}
    float getArea()
    {
        return area;
    }
    void calculateArea()
    {area=length*breadth;}

};



int main()
{
    Rectangle r1;
    r1.setLength(3.56);
    r1.setBreadth(6.00);
    r1.calculateArea();
    cout<<"area of rectangle is "<<r1.getArea();
return 0;

}