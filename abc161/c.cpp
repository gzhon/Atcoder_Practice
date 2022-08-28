#include<bits/stdc++.h>
using namespace std;
using vi=long long;
int main(void){

    vi n,k,a,b;
    cin>>n>>k;
    a=n/k; b=n/k+1;
    cout<<min(abs(n-a*k),abs(n-b*k))<<endl;
    return 0;
}