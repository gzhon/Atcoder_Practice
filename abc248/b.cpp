#include<bits/stdc++.h>
using namespace std;
using v=long long;
int main(void)
{
    v a,b,k,c=0;
    cin>>a>>b>>k;
    while(a<b){a*=k; c++;}
    cout<<c<<endl;
    return 0;
}