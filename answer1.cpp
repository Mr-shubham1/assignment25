#include<iostream>
using namespace std;

class complex
{
    private:
    int real;
    int img;

    public:
    void setreal(int x)
    {
        
        real=x;
    }
    void setimg(int y)
    {
        img=y;
    }
    void printcomplex()
    {
        cout<<real<<" + "<<img<<" i";
    }

};


int main()
{
    complex c1;
    c1.setreal(3);
    c1.setimg(4);
    c1.printcomplex();
    return 0;

}