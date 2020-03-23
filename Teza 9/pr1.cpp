#include<iostream>
using namespace std;
int circular(int a,int b)
{ int c=0;
int copie,n=0;
copie=b;
int p=10;
while(copie)
{
    n++;
    p=p*10;
    copie=copie/10;

}
while(c<n)
    {if(a==b)
    return c;
else {
        a=a/10+a%10*p;
a=a/10;

cout<<a<<" ";

}
c++;

    }
    return -1;



}
int main(){
int a,b;
cin>>a>>b;
cout<<circular(a,b);





}
