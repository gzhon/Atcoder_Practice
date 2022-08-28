#include<bits/stdc++.h>
using namespace std;
using vi=long long;
string v[2]={"Yes","No"};
int main(void)
{
    string s;
    vi sa=0,ea=0,flg=0;
    cin>>s;
    vi n=s.size(),sp=0,ep=s.size()-1;
    while(s[sp]=='a'&&sp<n)  { sa++; sp++;}
    while(s[ep]=='a'&&ep>=0) { ea++; ep--;}
    if(sa>ea) flg=1;
    else{
        while(sp<ep){
            if(s[sp]!=s[ep]){
                flg=1; 
                break;
            }
            sp++, ep--;
        }
    }
    cout<<v[flg]<<endl;
    return 0;
}