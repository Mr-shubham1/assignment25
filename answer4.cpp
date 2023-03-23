#include<iostream>
using namespace std;

class largestnumber
{
    private:
    int a,b,c,largest;

    public:
    void setA(int x)
    {
        a=x;
    }
    void setB(int x)
    {
        b=x;
    }
    void setC(int x)
    {
        c=x;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    int getC()
    {
        return c;
    }
    int getlargest()
    {
        return largest;
    }

    void calculatelargest()
    {
        if(a>b)
        {
            if(a>c)
            largest=a;
            else
            largest=c;
        }
        else
        {
            if(b>c)
            largest=b;
            else
            largest=c;
        }

    }

};

int main()
{
    largestnumber l1;
    l1.setA(3);
    l1.setB(4);
    l1.setC(6);
    l1.calculatelargest();
    cout<<"largest number among "<<l1.getA()<<" "<<l1.getB()<<" "<<l1.getC()<<" is "<<l1.getlargest();
    return 0;
}