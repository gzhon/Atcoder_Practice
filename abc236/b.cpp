#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,v;
    scanf("%d",&n);
    vector<int> s(n+1,0);
    for(int i=0;i<n*4-1;i++){
        scanf("%d",&v);
        s[v]++;
    }
    for(int i=1;i<=n;i++){
        if(s[i]==3){
            printf("%d\n",i);
            return 0;
        }
    }
}