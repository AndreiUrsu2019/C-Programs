#include <iostream>
using namespace std;
int main() {
    int i,n,p,s;
    cin>>n;
    s=0;
    for(i=1;i<=n;i++) {
        cin >> p;
        s=s+p;
    }
    cout<<s;

}