#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,p=0;
    cin>>n;
    vector<int> a(n);
    vector<bool >v(n+1,false);
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[a[i]]=true;
    }
    for(int i=0;i<=n;i++){
        if(v[i]==false){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}