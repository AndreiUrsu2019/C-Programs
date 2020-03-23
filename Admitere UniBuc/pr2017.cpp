#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
void FLIP(int n,int v[100],int i,int j)
{ int c,m;

    while(i!=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }



}
int main()
{ int n,i,j,v[100],m,p;
ifstream f("admitere.in");
f>>n;
for(i=1;i<=n;i++)
    f>>v[i];
    m=2;
    p=4;
FLIP(n,v,m,p);
for(i=1;i<=n;i++)
cout<<v[i]<<" ";



}
