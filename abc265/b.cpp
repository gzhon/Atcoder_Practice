#include<bits/stdc++.h>
using namespace std;
using let=long long;
using P = pair<int,int>;
using T = tuple<int,int>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vec2 = vector<vector<int>>;
using Graph = vector<vector<int>>;

vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};
int main(void)
{
    let n,m,t;
    cin>>n>>m>>t;
    vec1 a(n),bos(n+1,0);
    for(int i=0;i<n-1;i++) cin>>a[i];
    for(int i=0;i<m;i++){
        int x; let y;
        cin>>x>>y;
        bos[x-2]=y;
    }
    for(int i=0;i<n-1;i++){
        t-=a[i];
        if(t<=0){ puts("No"); return 0;}
        t+=bos[i];
    }
    puts("Yes");
    return 0;
}