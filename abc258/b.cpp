#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n,s[11][11],ans=0;
    int p[9]={1,1,1,0,0,-1,-1,-1},q[9]={1,0,-1,1,-1,1,0,-1};
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //ぶんかつする
            char p;
            cin>>p;
            s[i][j]=p-'0';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //ほうこうみる
            for(int k=0;k<8;k++){
                long long now=0,x=i,y=j;
                //はみでたらたしてわる
                for(int l=0;l<n;l++){
                    now*=10;
                    now+=s[x][y];
                    x+=p[k];
                    y+=q[k];
                    x%=n; x+=n; x%=n;
                    y%=n; y+=n; y%=n;
                }
                //くらべて
                ans=max(ans,now);
            }
        }
    }
    //だす
    printf("%lld\n",ans);
    return 0;
}