#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,p[31][31];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==i||j==0){
                p[i][j]=1;
            }
            else {
                p[i][j]=p[i-1][j-1]+p[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}