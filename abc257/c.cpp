#include<bits/stdc++.h>
using namespace std;
using vi=long long;
int main(void){

    vi n,mx=-1,pt=0;
    cin>>n;
    vector<pair<vi,char>> w(n);
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        w[i].second=c;
        pt+=c-'0';
    }
    for(int i=0;i<n;i++) cin>>w[i].first;
    sort(w.begin(),w.end());
    mx=pt;
    for(int i=0;i<n-1;i++){
        if(w[i].second=='1') pt--;
        else pt++;
        if(w[i].first!=w[i+1].first) mx=max(pt,mx);
    }
    if(w[n-1].second=='0') mx=max(pt+1,mx);
    cout<<mx<<endl;
    return 0;
}