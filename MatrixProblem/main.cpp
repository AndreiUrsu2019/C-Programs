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
    for(i=n-1;i>=1;i--)
        for(j=n-1;j>=1;j--) {
            t[i][j] = t[i][j] + max(t[i + 1][j], t[i + 1][j + 1]);
            if(i==n-1)
            rez[n]=max(t[i + 1][j], t[i + 1][j + 1]);
            //else if( )
        }

    for(i=1;i<=n;i++) {
        cout << endl;
        for (j = 1; j <= i; j++)
            cout<<t[i][j];
    }
    cout<<endl;

    for(i=n;i>=1;i--)
    {
        maxim=0;
        for(j=1;j<=i;j++)
        {
            if(s[i][j]+s[i-1][j]>s[i][j+1]+s[i-1][j]){
                if(s[i][j]+s[i-1][j]>maxim)
                maxim=s[i][j]+s[i-1][j];
            }
            else

            if(s[i][j+1]+s[i-1][j]>maxim)
                maxim=s[i][j+1]+s[i-1][j];



        }
        cout<<maxim<<" ";



    }
}
