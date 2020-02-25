#include<iostream>
#include<fstream>
using namespace std;
int main(){
int n,i=1,j,b,v[100],c[100],maxim=0;
ifstream f("bac.txt");
while(f>>b)
{v[i]=b;
i++;

}
n=i;
for(i=1;i<=n;i++)
    c[i]=1;

for(i=1;i<=n;i++)
    for(j=i;j<=n;j++)
    if(v[i]==v[j])
    c[i]++;
for(i=1;i<=n;i++)
if(c[i]>maxim)
maxim=c[i];
for(i=1;i<=n;i++)
    if(c[i]==maxim)
    cout<<v[i]<<" ";


}
