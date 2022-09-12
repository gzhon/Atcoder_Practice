#include<bits/stdc++.h>
#define isin(i,j,h,w) (!((i<0||i>=h||j<0||j>=w))?true:false)
using namespace std;
int main(void)
{
    int x,flg[101];
    for(int i=0;i<=100;i++) flg[i]=0;
    for(int i=0;i<5;i++){
        scanf("%d",&x);
        flg[x]=1;
    }
    int ans=0;
    for(int i=0;i<=100;i++){
        if(flg[i]==1) ans++;
    }
    printf("%d\n",ans);
    for(int i=0;i<=100;i++) cout<<flg[i]<<" ";
    return 0;
}