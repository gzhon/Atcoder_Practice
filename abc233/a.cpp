#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,v,ans=0;
    scanf("%d %d",&n,&v);
    if(n<v){
        for(int i=n;i<v;i=i+10){
            if(!(n<v)){
                break;
            }
            else {
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}