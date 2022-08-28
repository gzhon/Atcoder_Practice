#include<bits/stdc++.h>
using namespace std;
using vi=long long;
int main(void){

    vi n,ans=0;
    cin>>n;
    vector<vi> a(n),b(n),c(n),ac(n+1,0),bc(n+1,0); 
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];
    for(int i=0;i<n;i++){
        ac[a[i]]++;
        bc[b[c[i]-1]]++;
    }
    for(int i=1;i<=n;i++) ans+=ac[i]*bc[i];
    cout<<ans<<endl;
    return 0;   
}