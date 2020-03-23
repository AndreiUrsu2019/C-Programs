#include<iostream>
#include<cmath>
using namespace std;
int patrat(int n)
{
    int d,max=0;
    d=2;
    while(d<=n/2)
    {if(sqrt(d)*sqrt(d)==d)
       if(d>=max)
        max=d;
    d++;


    }
    return max;
}
int main(){

int n;
cin>>n;
cout<<patrat(n);




}
