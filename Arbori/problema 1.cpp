#include<iostream>
#include<fstream>
using namespace std;
int main(){
int t[100],n,a[100][100],i,j,c;
ifstream f("tati.in");
f>>n;
for(i=1;i<=n;i++)
    f>>t[i];
for(i=1;i<=n;i++)
    if(t[i]==0)
    cout<<"Radacina este "<<i;
   j=1;
for(i=1;i<=n;i++)
{

    a[t[i]][j]=a[j][t[i]]=1;
    j++;

}

int x=5,gre=0,gri=0;
for(i=1;i<=n;i++)
    if(a[i][x]==1)
    gri++;
int s=0;

s=gri;
cout<<endl;
cout<<"Gradul nodului "<<x<<" este "<<s;

}
