#include<bits/stdc++.h>
using namespace std;
int main(void){

    int n,k,mx=-1;
    string ans="No";
    scanf("%d %d",&n,&k);
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<k;i++) cin>>b[i];
    for(int i=0;i<k;i++){
        if(a[b[i]-1]==mx) ans="Yes";
    }
    cout<<ans<<endl;
    return 0;
}