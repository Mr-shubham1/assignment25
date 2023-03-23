#include<iostream>
using namespace std;

class reversenumber
{
    private:
    int number;
    int reversednumber;

    public:
    void setnumber(int x)
    {
        number=x;
    }
    int getnumber()
    {
        return number;
    }
    int getreversednumber()
    {
        return reversednumber; 
    } 
     void calculatereversenumber()
    {
        
        int n=number;
        int ans=n%10;
        while(n!=0)
        {
             
           ans=ans*10;
           n=n/10;
           ans=ans+n%10;
          
        }
        reversednumber= ans/10;
    }


   

};


int main()
{
    

    reversenumber n1;
    n1.setnumber(5435);
    n1.calculatereversenumber();
    cout<<"reverse number of "<<n1.getnumber()<<" is "<<n1.getreversednumber();
    

    return 0;
}