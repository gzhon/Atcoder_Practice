#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n,v,x,y,ans=0;
    scanf("%d %d",&n,&v);
    vector<pair<long long,long long>> kabe;
    for(int i=0;i<n;i++){
        scanf("%lld %lld",kabe[i].second,kabe[i].first);
    }
    sort(kabe.begin(),kabe.end(),)
    for(int i=0;i<n;i++){
        if(!abs(kabe[i].first-x)<=v||abs(kabe[i].second-y)<=v){
            ans++;
            x=kabe[i].first; y=kabe[i].second;
        }
    }
    printf("%lld\n",ans);
    return 0;
}