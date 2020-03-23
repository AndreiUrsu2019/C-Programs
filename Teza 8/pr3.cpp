#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f("bac.txt");
    long long int p;
    int v[100],i,n,x;
    i=1;
    while(f>>x)
    {v[i]=x;
    i++;

    }
    n=i-1;
    int c,k=0,m[100];
    for(i=1;i<=n;i++)
    {p=1;
     c=0;

        for(x=1;x<=v[i];x++)
        p=p*x;
        while(p>9)
        {
            if(p%10==0)
                c++;
            p=p/10;

        }
        m[i]=c;


    }
    int max=0;
    for(i=1;i<=n;i++)
        if(m[i]>=max)
            max=m[i];
        for(i=1;i<=n;i++)
            if(m[i]==max)
            k++;
        cout<<k<<" "<<max;


}
