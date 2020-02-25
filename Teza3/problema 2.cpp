#include<iostream>
using namespace std;
int numarare(int n,int m)
{ m=0;
    int maxim,k=0,c,d,i;
    c=n;
    while(n)
    {if(n%2!=0)
    { m=m*10;
        k++;
    m=m+n;


    }
    n=n/10;
    }
    if(k==0)
    {m=-1;
    return m;

    }
return m;

}
int main()
{
    int n,m;
    cin>>n;
    numarare(n,m);
cout<<m;






}
