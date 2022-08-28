#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n,m,a,b;
    scanf("%lld %lld",&n,&m);
    vector<pair<long long,long long>> v;
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    long long ans=1,cru=v[0].first+m-1;
    for(int i=1;i<n;i++){
        if((v[i].second>cru)){
            cru=v[i].first+m-1; ans++;
        }
    }
    printf("%lld\n",ans);
    return 0;
}