#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,v,q,x,k,ans=-1;
    map<int,vector<int>> mp; 
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&v);
        mp[v].push_back(i+1);
    }
    for(int i=0;i<q;i++){
        scanf("%d %d",&x,&k);
        ans=-1;
        if(mp[x].size()>=k){
            ans=mp[x][k-1];
        }
        printf("%d\n",ans);
    }
    return 0;
}