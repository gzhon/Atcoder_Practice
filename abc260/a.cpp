#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<int> a(n),b(n),v(1010,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<x;i++){
        int pos=-1;
        for(int j=0;j<n;j++){
            if(v[j]!=1){
                if(pos==-1||a[j]>a[pos]) pos=j;
            }
        }
        v[pos]=1;
    }
    for(int i=0;i<y;i++){
        int pos=-1;
        for(int j=0;j<n;j++){
            if(v[j]!=1){
                if(pos==-1||b[j]>b[pos]) pos=j;
            }
        }
        v[pos]=1;
    }
    for(int i=0;i<z;i++){
        int pos=-1;
        for(int j=0;j<n;j++){
            if(v[j]!=1){
                if(pos==-1||(a[j]+b[j])>(a[pos]+b[pos])) pos=j;
            }
        }
        v[pos]=1;
    }
    for(int i=0;i<v.size();i++) if(v[i]){printf("%d\n",i+1);}
    return 0;
}