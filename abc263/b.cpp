#include<bits/stdc++.h>
using namespace std;
using null=long long;
int main(void)
{
    null n,l,r,sum=0;
    cin>>n>>l>>r;
    vector<null> v(n+4),sb(n+4,0),se(n+4,0);
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++){
        sum=sb[i-1]+v[i];
        sb[i]=min(sum,i*l);
    }
    sum=0; se[n+1]=0;
    for(int i=n;i>=1;i--){
        sum=se[i+1]+v[i];
        se[i]=min(sum,r*(n-i+1));
    }
    null ans=sb[0]+se[1];
    for(int i=1;i<=n;i++) ans=min(ans,sb[i]+se[i+1]);
    cout<<ans<<endl;
    return 0;
}