#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,x,count=0;
    scanf("%d %d",&n,&x);
    vector<int>  p(n);
    vector<bool> f(n,false);
    for(int i=1;i<=n;i++) scanf("%d",&p[i]);
    int i=x;
    while(f[i]!=true){
        f[i]=true;
        i=p[i];
        count++;
    }
    printf("%d\n",count);
    return 0;
}