#include<bits/stdc++.h>
#define INF 1e10
using namespace std;
using let=long long;
using P = pair<let,let>;
using vecs = vector<string>;
using vec1 = vector<let>;
using vectf=vector<bool>;
using vec2 = vector<vector<let>>;
using Graph = vector<vector<let>>;

vec1 dx={1,0,-1,0};
vec1 dy={0,1,0,-1};

int main(void)
{
    bool flg=true;
    let h,w,x=0,y=0;
    cin>>h>>w;
    vecs s(h);
    vector<vectf> maps(h,vectf(w,false)); 
    for(int i=0;i<h;i++) cin>>s[i];
    maps[0][0]=true;
    while(1){
        int nx=x,ny=y;
        if(s[x][y]=='U') nx--;
        if(s[x][y]=='D') nx++;
        if(s[x][y]=='L') ny--;
        if(s[x][y]=='R') ny++;
        if(nx<0||nx>=h||ny<0||ny>=w) break;
        if(maps[nx][ny]==true){ flg=false; break; }
        x=nx; y=ny; maps[x][y]=true;
    }
    if(flg==true) cout<<++x<<" "<<++y<<endl;
    else puts("-1");
    return 0;
}