#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,p=0;
    char s[10001];
    cin>>a>>b;
    for(int i=0;i<26;i++){
        for(int j=0;j<a;j++){
            s[p]='A'+i;
            p++;
        }
    }
    cout<<s[b-1]<<endl;
    return 0;
}