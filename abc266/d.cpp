#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<=0||i>h||j<=0||j>w))?true:false)
#define mid 998244353
#define INF 1e17
using namespace std;
using let=long long;
using P = pair<let,let>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vec2 = vector<vector<let>>;
using Graph = vector<vector<let>>;

vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};

int main(void){

    let n;
    cin>>n;
    vec1 t(n),x(n),a(n);
    for(int i=0;i<n;i++) cin>>t[i]>>x[i]>>a[i];
    vec1 q=t;
    sort(q.begin(),q.end(),greater<let>());
    vec2 dp(q[0]+10,vec1(5,-1)),p(q[0]+10,vec1(5,0));
    dp[0][0]=0;
    for(int i=0;i<n;i++) p[t[i]][x[i]]=a[i];
    for(int i=0;i<=q[0];i++){
        for(int j=0;j<5;j++){
            if(dp[i][j]!=-1){
                dp[i+1][j]=max({dp[i][j]+p[i+1][j],dp[i+1][j]});
                if(j<4){
                    dp[i+1][j+1]=max({dp[i+1][j+1],dp[i][j]+p[i+1][j+1]});
                }
                if(j>0){
                    dp[i+1][j-1]=max({dp[i+1][j-1],dp[i][j]+p[i+1][j-1]});
                }
            }
        }
    }
    let mx=0;
    for(int i=0;i<5;i++) mx=max(mx,dp[q[0]][i]);
    cout<<mx<<endl;
    return 0;
}