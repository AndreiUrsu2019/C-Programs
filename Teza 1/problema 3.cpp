#include<iostream>
#include<fstream>
using namespace std;
int main()
{ ///Incepem prin a declara variabilele folosite si prin a initializa fisierul.
    ///Continuam prin citirea primului element.
    ///Variabilele m si m2 contorizeaza numarul de cifre ale fiecaror valori luate de catre v si u.
    ///In final, contorizam numarul de perechi ce respecta conditia problemei.
    ///Algoritmul este efeicient, deoarece sunt uitilizate variabile simple iar timpul de executie este unul mic.

    int m,m2,copie2,copie,c=0,i,u,v,s=0;
    ifstream f("bac.txt");
    f>>u;
    while(f>>v)
    {  m=1;
        m2=1;
        copie=v;
        copie2=u;

        while(v>9)
        {
            v=v/10;
            m++;
        }

        while(u>9)
            {u=u/10;
        m2++;}

        if(v==copie2%10&&m==m2)
            c++;
        u=copie;

    }
    cout<<c;





}
