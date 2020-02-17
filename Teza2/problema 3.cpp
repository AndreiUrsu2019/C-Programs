#include<iostream>
#include<fstream>
using namespace std;
int main(){

int s[100],c1,minim=99,i,j,m,n,a[100],b[100];
ifstream f("bac3.txt");
f>>n;
f>>m;
for(i=1;i<=n;i++)
    f>>a[i];
for(i=1;i<=m;i++)
    f>>b[i];
for(i=1;i<=m;i++)
{  c1=0;
    for(j=1;i<=n;j++)
    if(b[i]==a[j])
        c1++;
    s[i]=c1;



}
for(i=1;i<=m;i++)
if(s[i]<minim)
    minim=s[i];
cout<<s[i];

}
