#include<iostream>
using namespace std;

int numarare(int a,int b){
int ok=0,i,c2,c,d;
c=0;
for(i=a+1;i<b;i++)
{ d=2;
c2=0;

while(d<i/2)
    {if(i%d==0)
       c2++;

    d++;
    }
    if(c2==3)
        c++;

cout<<c2<<" ";

}
return c;



}
int main(){
int a,b;
cin>>a>>b;
cout<<numarare(a,b);





}
