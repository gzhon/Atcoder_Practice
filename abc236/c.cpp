#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    string v;
    scanf("%d %d",&n,&m);
    map<string,bool> mp;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<m;i++){
        cin>>v; 
        mp[v]=true;
    } 
    for(int i=0;i<n;i++){
        auto itr=mp.find(s[i]);
        if(itr!=mp.end()){
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    return 0;
}