#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b;
    string s;
    cin>>s>>a>>b;
    swap(s[a-1],s[b-1]);
    cout<<s<<endl;
    return 0;
}