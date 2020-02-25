#include<iostream>
#include<fstream>
using namespace std;


int main(){

int i=1,c=1,n,m,k;
ofstream f("bac.txt");
cin>>n>>m>>k;
int p=i;
while(c<=k)
{ c=0;
    if(i%m==0&&i%n==0)
    f<<i<<" ";
i++;
p=i;
while(p)
{ c++;
  p=p/10;
}


}


}
