#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,mx;
    string s,ans;
    map<string,int> v; 
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s;
        v[s]++;
        if(mx<v[s]){
            mx=v[s]; 
            ans=s;
        }
    }
    cout<<ans<<endl;
    return 0;
}