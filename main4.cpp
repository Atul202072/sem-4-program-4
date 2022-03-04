# include <iostream>
#include<math.h>
using namespace std;

class Power                                               //creating class with classname as power
{
    public:
    double power(double m,int n)                          // function definition with functionname as power
    {
    int i, ans=1;
       for(i=1;i<=n;i++)                                  // calculation using loop
       {
           ans=ans*m;
       }
        return ans;
    }
    double power(double m)                                // function definition with functionname as power
    {                                                     // Concept of function overloading 
        int n=2;
        double a;
        a=pow(m,n);                                       // calculation using power function from math library
        return a;
    }
};

    int main()
    { 
    int result=0;
    Power pow;                                           // creating pow variable of power data-type
    result=pow.power(6,4);                               // function call
    cout<<"The result of 6^4 is: "<<result;              // Result display
    return 0;   
    }
