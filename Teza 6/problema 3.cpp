#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream f("bac.txt");
int x,p,v[100],i,n;
f>>p;
i=1;
while(f>>x)
{ v[i]=x;
i++;

}
n=i-1;
int mi,b,j,cop,sum,ok=0;
cop=p;
for(i=1;i<=n;i++)
{  for(j=1;j<=v[i];j++)
     {cop=p;
     sum=0;
     while(cop)
     { b=j;
      mi=j;
        sum=sum+b;
        b++;
        cop--;

     }

     if(sum==v[i])
     {
         cout<<mi-1<<" ";
         ok=1;

     }
       if(ok==0)
        cout<<"NU"<<" ";
     }



}





}
