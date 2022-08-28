#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,p=0,a[101],v[4]={0,0,0,0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        v[0]=1;
        for(int j=3;j>=0;j--){
            if(v[j]==1){
                v[j]=0;
                if(j+a[i]<4) v[j+a[i]]=1;
                else p++;
            }
        }
    }
    printf("%d\n",p);
    return 0;
}