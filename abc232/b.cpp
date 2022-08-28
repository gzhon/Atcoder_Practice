#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s,t;
    cin>>s>>t;
    for(int k=0;k<=25;k++){
        string p=s;
        for(int i=0;i<int(s.size());i++){
            p[i]=((p[i]-'a')+k)%26+'a';
        }
        if(p==t){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}