#include<bits/stdc++.h>
using namespace std;
int main(void){

    string ans;
    string s; 
    cin>>s; 
    if(s.size()==1) ans=s+s+s+s+s+s;
    if(s.size()==2) ans=s+s+s;
    if(s.size()==3) ans=s+s;
    cout<<ans<<endl;;
    return 0;
}