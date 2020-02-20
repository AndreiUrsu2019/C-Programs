#include<iostream>
using namespace std;
int numar(int n,int m){

int c,m,maxim=0;

while(n)
{
    if(n%10/2!=0)
        m=m+n;
    m=m*10;
    n=n/10;


}
c=m;
int v[100]=0;
int i=1;
int k=0;
while(m)
{ v[i]=m%10;
i++;
k++;
m=m/10;

}
for(i=1;i<=k;i++)


}
