#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int h,w;
    scanf("%d %d",&h,&w);
    vector<vector<int>> v(h,vector<int>(w)),aws(w,vector<int>(h));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            scanf("%d",&v[i][j]);
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            aws[j][i]=v[i][j];
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            printf("%d ",aws[i][j]);
        }
        puts("");
    }
    return 0;
}