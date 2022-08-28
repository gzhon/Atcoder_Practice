#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    bool flg=false;
    cin>>n;
    string ans="Yes";
    map<string,int> f;
    vector<string> s(n),t(n);
    for(int i=0;i<n;i++){
        cin>>s[i]>>t[i];
        f[s[i]]++;
        f[t[i]]++;
    }
    for(int i=0;i<n;i++){
        f[s[i]]--; f[t[i]]--;
        if(f[s[i]]>=1&&f[t[i]]>=1){
            ans="No"; break;
        }
        f[s[i]]++; f[t[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}