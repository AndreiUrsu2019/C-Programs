#include<iostream>
using namespace std;

int divizori(int n)
{ int ok=0,d=2,s=0,d2=1;
while(d<=n/2)
  { ok=0;
      if(n%d==0)
    {  d2=2;
        while(d2<=d)
        {
            if(d%d2==0)
                ok++;
            d2++;
        }



    }
    if(ok==1)
      s=s+d;
  d++;


  }
    return s;
}
int main(){
int n;
cin>>n;
cout<<divizori(n);



}
