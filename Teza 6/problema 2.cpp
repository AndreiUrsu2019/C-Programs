#include<iostream>
using namespace std;
int divizor(int n,int v[101]){
int minim,k=1,c=0,d=2,i,maxim=0;
minim=v[1];
for(i=1;i<n;i++){
   k++;
    if(v[i]>v[i+1])
        minim=v[i+1];
}
while(d<=minim/2)
{  c=0;
    for(i=1;i<=n;i++)
        if(v[i]%d==0)
            c++;
    if(c==k)
        if(d>maxim)
        maxim=d;
    d++;
}
return maxim;

}
int main(){
int i,n,v[100];
cin>>n;
for(i=1;i<=n;i++)
    cin>>v[i];
cout<<divizor(n,v);





}
