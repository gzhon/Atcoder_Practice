#include<bits/stdc++.h>
using namespace std;
long long n,m[100001],x,cc=0;
vector<long long> s[100001];
void moti(long long,long long);
int main(void)
{   
    long long gg;
    scanf("%lld %lld",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%lld",&m[i]);
        for(int j=0;j<m[i];j++){
            scanf("%lld",&gg);
            s[i].push_back(gg);
        }
    }
    moti(0,1);
    printf("%lld\n",cc);
    return 0;
}
void moti(long long v,long long ans)
{
    if(v==n){
        if(ans==x) cc++;
    }
    else{
        for(int i=0;i<m[v];i++){
            if(s[v][i]*ans<=x) moti(v+1,s[v][i]*ans);
        }
    }
}