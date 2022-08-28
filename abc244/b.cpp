#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string t;
    char p='E';
    int n,x=0,y=0;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        if(t[i]=='S'){
            if(p=='E') x++;
            else if(p=='S') y--;
            else if(p=='N') y++;
            else if(p=='W') x--;
        }
        else {
            if(p=='E') p='S';
            else if(p=='S') p='W';
            else if(p=='W') p='N';
            else if(p=='N') p='E';
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}