#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ifstream f("bac.txt");
    ofstream g("bac.out");
    int k,v[100],i,x,j;
    i=1;
    while(f>>x)
    {
        v[i]=x;
        i++;
    }
    k=i-1;
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
        if(v[i]>v[j])
        swap(v[i],v[j]);
    for(i=1;i<=k;i++)
        g<<v[i]<<" ";



}
