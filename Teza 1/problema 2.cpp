#include<iostream>
using namespace std;

int numarare(int n,int m,int a[100],int b[100])
{
    int i,j,c=0,minim=0;
    for(i=1; i<m; i++)
        if(b[i]<b[i+1])
            minim=b[i];
    for(j=1; j<=n; j++)
        if(a[j]<minim)
            c++;
    return c;



}

