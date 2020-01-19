#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//removed comment
	//c
    struct nod{
    int info;
    nod*urm
    }*prim,*ultim,*nou;
    int n,i;
    cin>>n;
    prim=new nod;
    cin>>prim->info;dfg
    prim->urm=NULL;
    ultim=prim;
    for(i=2;i<=n;i++)
    {
        nou=new nod;
        cin>>nou->info;
        nou->urm=NULL;
        ultim->urm=nou;
        ultim=nou;
    }
    cout<<n;
}
