#include<bits/stdc++.h>
using namespace std;
using VLN=long long; //Very Long Long Number
int main(void)
{
    VLN n,x,y;
    cin>>n>>x>>y;
    vector<VLN> r(n+5),b(n+5);
    r[1]=0; b[1]=1;
    for(int i=2;i<=n;i++){
        b[i]=r[i-1]+b[i-1]*y;
        r[i]=r[i-1]+b[i]*x;
    }
    cout<<r[n]<<endl;
    return 0;
}