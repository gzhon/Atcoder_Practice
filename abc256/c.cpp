#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int ans=0;
    int h1,h2,h3,w1,w2,w3;
    cin>>h1>>h2>>h3>>w1>>w2>>w3;
    for(int i=1;i<=30;i++){
        for(int j=1;j<=30;j++){
            for(int k=1;k<=30;k++){
                for(int l=1;l<=30;l++){
                    int a=h1-i-j;
                    int b=h2-k-l;
                    int d=w1-i-k;
                    int e=w2-j-l;
                    int f=w3-a-b;
                    if(d+e+f==h3&&min({a,b,d,e,f})>0){
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}