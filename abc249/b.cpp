#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int af=0,Af=0,sf=1;
    map<char,bool> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if('a'<=s[i]&&s[i]<='z') af=1;
        if('A'<=s[i]&&s[i]<='Z') Af=1;
        if(mp.find(s[i])==mp.end()) mp[s[i]]=true;
        else { sf=0; break;}
    }
    if(af==1&&Af==1&&sf==1)puts("Yes");
    else puts("No");
    return 0;
}