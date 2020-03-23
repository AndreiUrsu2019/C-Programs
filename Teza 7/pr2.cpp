#include<iostream>
using namespace std;
void permuta(int n,int a[100],int k)
{
    int i,j;
    for(i=k;i<=n;i++)
        for(j=1;j<=k;j++)
        swap(a[i],a[j]);


}
int main()
{ int n,a[100],i,k=2;
cin>>n;
for(i=1;i<=n;i++)
    cin>>a[i];
    permuta(n,a,k);
for(i=1;i<=n;i++)
    cout<<a[i]<<" ";




}
