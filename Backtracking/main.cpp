#include<iostream>
#include <algorithm>
using namespace std;
int n,v[10];
int p;
int i;
int a[]={};

void afisare(int a[]){
    for(i=0;i<n;i++)
        cout<<a[i];
    cout<<endl;

}

void findPermutations(int a[])
{
    // Find all possible permutations
    cout << "Possible permutations are:\n";
    do {
        afisare(v);
    } while (next_permutation(a, a + n));
}

void back(int p){

if(p==n)
    afisare(v);
 else {
    v[p] = p + 1;
    back(p + 1);
}

}
int main(){

    cin>>n;
    back(0);
    findPermutations(v);


}

