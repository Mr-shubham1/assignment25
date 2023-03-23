#include<iostream>
using namespace std;

class Square
{
    private:
    int number;
    int square;

    public:
    void setnumber(int x)
    {
        number =x;
    }
    int getnumber()
    {
        return number;
    }
    int getsquare()
    {
        return square;
    }

    void calculatesquare()
    {
        int t=number*number;
        square=t;
    }


};


int main()
{
    Square S;
    S.setnumber(5);
    S.calculatesquare();
    cout<<"square of "<<S.getnumber()<<" is "<<S.getsquare();
    return 0;

}