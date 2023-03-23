#include<iostream>
using namespace std;

class factorial
{
   private:
   int n;
   int fact;

   public:
   int getN()
   {
    return n;
   }
   int getfactorial()
   {
    return fact;
   }
   void setN(int x)
   {
    n=x;
   }

   void calculatefactorial()
   {
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p=p*i;
    }
    fact =p;
   }
};


int main()
{
    factorial f1,f2;
    f1.setN(5);
    f2.setN(6);
    f1.calculatefactorial();
    cout<<"factorial of "<<f1.getN()<<" is "<<f1.getfactorial();
    cout<<endl;
    f2.calculatefactorial();
    cout<<"factorial of "<<f2.getN()<<" is "<<f2.getfactorial();

 return 0;
}
