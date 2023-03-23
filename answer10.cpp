#include<iostream>
using namespace std;

class Area
{
    private:
    float length,breadth;
    float radious;
    float base,height;

    float arearectangle;
    float areacircle;
    float areatriangle;


    public:

    void setlength_breadth(float x,float y){length=x;breadth =y;}
    void setradious(float x){radious=x;}
    void setbase_height(float x,float y){base=x;height=y;}

    void calculatearearectangle()
    {
        arearectangle=length*breadth;
    }
    void calculateareacircle()
    {
        areacircle=3.14*radious*radious;
    }
    void calculateareatriangle()
    {
        areatriangle=.5*base*height;
    }

    float getarearectangle()
    {return arearectangle;}
    float getareacircle()
    {return areacircle;}
    float getareatriangle()
    {return areatriangle;}
};
int main()
{
    Area r;
    r.setlength_breadth(4,8.6);
    r.calculatearearectangle();
    cout<<"area of rectangle is "<<r.getarearectangle()<<endl;
    r.setradious(3.14);
    r.calculateareacircle();
    cout<<"area of circle is "<<r.getareacircle();
    return 0;

}