#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
using let = long long;
using str = string;
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

    str s;
    let n;
    vec1 row(10,0);
    bool flg=false;
    cin>>s;
    if(s[0]=='0'){
        if(s[6]=='0') row[0]=1;
        if(s[3]=='0') row[1]=1;
        if(s[9]=='0') row[6]=1;
        if(s[5]=='0') row[5]=1;
        if(s[0]=='0'&&s[4]=='0') row[3]=1;
        if(s[8]=='0'&&s[2]=='0') row[4]=1;
        if(s[7]=='0'&&s[1]=='0') row[2]=1;
        for(int i=0;i<7;i++){
            if(row[i]==0&&row[i+1]==1){
                for(int j=i+2;j<7;j++){
                    if(row[j]==0){ flg=true; goto END; }
                }
            }
        }
    }
    END:;
    cout<<(flg? "Yes":"No")<<endl;
    return 0;
}