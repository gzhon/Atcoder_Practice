#include<bits/stdc++.h>
#define inf=1e18
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let = long long;
using P = pair<int,int>;
using vecs = vector<string>;
using vec1 = vector<int>;
using vec2 = vector<vector<int>>;
using Graph = vector<vector<int>>;

vec1 dx4={1,0,-1,0};
vec1 dy4={0,1,0,-1};
vec1 dx8={1,1,1,0,0,-1,-1,-1};
vec1 dy8={1,0,-1,1,-1,1,0,-1};
int main(void){

    int n,m;
    cin>>n>>m;
    vector<let> a(n);
    vector<let> dp(n,inf);
    dp[0][0]=0;
    dp[0][1]=inf*-1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) dp[0][i]=a[i];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){

        }
    }
    return 0;
}