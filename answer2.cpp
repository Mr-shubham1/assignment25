#include<iostream>
using namespace std;

class Time
{
    private:
    int hr;
    int min;
    int sec;

    public:
    void sethour(int x)
    {
        hr=x;
    }
    void setminute(int x)
    {
        min=x;
    }
    void setsecond(int x)
    {
        sec=x;
    }

    void displaytime()
    {
        cout<<hr<<" hour "<<min<<" minute "<<sec<<" second";
    }

};


int main()
{
    Time t;
    t.sethour(3);
    t.setminute(45);
    t.setsecond(20);

    t.displaytime();
    return 0;

}