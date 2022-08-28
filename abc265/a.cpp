#include<bits/stdc++.h>
using namespace std;
using let=long long;
using P = pair<int,int>;
using vecs = vector<string>;
using vec1 = vector<int>;
using vec2 = vector<vector<int>>;
using Graph = vector<vector<int>>;

vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};
int main(void)
{
    int x,y,n;
    cin>>x>>y>>n;
    cout<<min(x*n,(n/3)*y+(n%3)*x)<<endl;
    return 0;
}