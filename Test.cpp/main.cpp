#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    struct nod{
    int info;
    nod*urm;
    }*x,*aux,*prim,*ultim,*nou;

    int n,i;
    cin>>n;
    prim=new nod;
    cin>>prim->info;
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


    aux=prim->urm;
    delete prim;
    prim=aux;

    x=new nod;
    x->info=16;
    x->urm=NULL;
    ultim->urm=x;
    ultim=x;

    nod*p;
    p=prim;
    while(p)
    {
        cout<<p->info<<" ";
        p=p->urm;
    }

}
