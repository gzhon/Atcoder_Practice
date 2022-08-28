#include<bits/stdc++.h>
using namespace std;
using vi=long long;
int main(void){

    vi k,p,at=0;
    vector<vi> s;
    cin>>k;
    for(int i=1;i<=9;i++) s.push_back(i);
    while(s.size()<=k){
        p=s[at]%10; 
        for(int i=-1;i<=1;i++){
            if(p+i>=0&&i+p<10) s.push_back(s[at]*10+(p+i));
        }
        at++;
    }
    cout<<s[k-1]<<endl;
    return 0;
}