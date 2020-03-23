#include<iostream>
#include<fstream>
using namespace std;
int main()
{ ifstream f("numere.in");
int v[100],n,i,m,x,c;
f>>n;
i=1;
while(f>>x)
   { v[i]=x;
   i++;
   }
   m=i-1;
   c=n;
   int j;
   for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    if(v[j]==i&&v[j]!=v[j-1])
    c--;
   cout<<c;










}
