#include<iostream>
using namespace std;
int main(){
int n,a[100][100],m[100][100],i,j;
cin>>n;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cin>>a[i][j];
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
if(i!=n/2+1&&j!=n/2+1)
m[i][j]=a[i][j];
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
{if(m[i][j]==0&&j==n/2+1)
 {m[i][j]=m[i][j+1];
  m[i][j+1]=m[i][j+2];
 }
 if(m[i][j]==0||i==n/2+1)
        {m[i][j]=m[i+1][j];
        m[i+1][j]=m[i+2][j];
        }
  if(i==n/2+1&&j==n/2+1)
  {m[i][j]=m[i+1][j+1];
   m[i+1][j+1]=m[i+1][j+2];
  }
}

for(i=1;i<=n-1;i++)
{
     cout<<endl;
    for(j=1;j<=n-1;j++)
cout<<m[i][j]<<" ";

}
}
