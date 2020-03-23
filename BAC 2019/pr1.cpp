#include<iostream>
using namespace std;
int duplicare(int n,int d)
{ int ok=0;
    while(n)
{ if(n%10%2==1)
   {d=d*100+(n%10)*11;
   ok=1;
   }
   else
    d=d*10+n%10;
    n=n/10;

}
n=d;
d=0;
while(n)
{ d=d*10+n%10;
n=n/10;


}
if(ok==0)
    return -1;
else return d;





}
int main()
{
    int n,d;
    cin>>n;
    d=0;
    cout<<duplicare(n,d);



}
