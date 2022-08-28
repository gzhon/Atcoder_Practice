#include<bits/stdc++.h>
using namespace std;
using vn=long long;
int main(void)
{
    vn n,k;
    double ans=0.0;
    scanf("%lld %lld",&n,&k);
    map<vn,vn> mp;
    vector<vn> a(k),x(n),y(n);
    for(int i=0;i<k;i++) {
        scanf("%lld",&a[i]);
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++) scanf("%d %d",&x[i],&y[i]);
    for(int i=1;i<=n;i++){
        vn mx=1e18;
        for(int j=1;j<=k;j++) mx=min(mx,(x[a[j]]-x[i])*(x[a[j]]-x[i])+(y[a[j]]-y[i])*(y[a[j]]-y[i]));
        ans=max(ans,sqrt(mx));
    }
    printf("%.8lf",ans);
    return 0;
}