#include <iostream>
#include<fstream>
using namespace std;

ifstream f("MatrixFile.txt");
int a[100][100];
int i,j;
bool isPassed[100];
int n;



void ReadMatrix()
{
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        f >> a[i][j];
        a[j][i]=a[i][j];
    }
}

void Test()
{

}
int ArraySum(int n,int v[ ])
{

}


int main() {
int p;
int k;
cout<<"k=";
cin>>k;
f>>n;
cout<<n;cout<<endl;
ReadMatrix();
for(i=1;i<=n;i++) {
    int p = 0;
    for(p;p<=i-1; p++)
          cout<<" ";
    cout<<endl;
    for (j = 1; j <= n; j++)
        cout << a[i][j] << " ";
}
int s;
cout<<endl;
for(i=n;i>=1;i--) {
    s=0;
    for (j = 1; j <= n; j++)
        s = s + a[i][j];
  if(s<k)
      cout<<i<<" ";
}
//int start,currentNode,foundNode,pathValue,paths;
//start=
}