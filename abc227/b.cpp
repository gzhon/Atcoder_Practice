#include<bits/stdc++.h>
using namespace std;
int main(void)
{  
    /* 
    |------------------------------|
    |                               |
    |   問題文よめ!!!!!!!(俺へ)      |
    |                               |
    |------------------------------|
    */
    bool flg;
    int n,count=0;
    scanf("%d",&n);
    vector<int> p(n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++){
        flg=false;
        for(int j=1;j<=500;j++){
            for(int k=1;k<=500;k++){
                if(((4*j*k)+(3*j)+(3*k))==p[i]){
                    flg=true;
                    break;
                }
            }
        }
        if(flg==false){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}