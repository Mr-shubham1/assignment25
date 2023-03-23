#include<iostream>
using namespace std;

class Greatest
{
    private:
    int a,b,c,Greatest;

    public:
    int getA(){return a;}
    int getB(){return b;}
    int getC(){return c;}
    int getGreatest(){return Greatest;}

    void setA(int x){a=x;}
    void setB(int x){b=x;}
    void setC(int x){c=x;}

    void calculateGreatest()
    {
        if(a>b)
        {
            if(a>c)
            Greatest=a;
            else
            Greatest=c;
        }
        else
        {
            if(b>c)
            Greatest=b;
            else
            Greatest=c;
        }
    }
};

int main()
{
    Greatest g1;
    g1.setA(4);
    g1.setB(8);
    g1.setC(46);
    g1.calculateGreatest();
    cout<<"greatest among "<<g1.getA()<<","<<g1.getB()<<","<<g1.getC()<<" is "<<g1.getGreatest();


    return 0;
}
