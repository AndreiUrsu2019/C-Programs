#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int maxim,i,j,n,t[100][100],s[100][100],rez[100];
    std::ifstream f("matrix.txt");
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            f>>t[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            s[i][j]=t[i][j];

    for(i=n-1;i>=1;i--)
        for(j=n-1;j>=1;j--)
            t[i][j]=t[i][j]+ max(t[i+1][j],t[i+1][j+1]);

    for(i=1;i<=n;i++) {
        cout<<endl;
        for (j = 1; j <= i; j++)
            cout << t[i][j];
    }
    rez[1]=s[1][1];
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
           if(t[i+1][j]+s[i][j]==t[i][j])
               rez[i+1]=s[i+1][j];


}