#include<iostream>
#include<fstream>
using namespace std;
ifstream f("date.in");
int n,a[100][100];
f>>n;
void read()
{ while(f>>i>>j)
a[i][j]=1;


}
int grint(int x)
{   int i,s=0;
    for(i=1;i<=n;i++)
        s=s+a[i][x];

}
