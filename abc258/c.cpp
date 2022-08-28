#include<bits/stdc++.h>
using namespace std;
int main(void)
{   
    char s[500001];
    int n,q,t,x,v,p=0;
    scanf("%d %d",&n,&q);
    scanf("%s",s);
    for(int i=0;i<q;i++){
        scanf("%d %d",&t,&x);
        if(t==1){
            p+=x;
            if(p>n) p-=n;
        }
        else {
            v=x-p;
            if(v<=0) v+=n;
            printf("%c\n",s[v-1]);
        }
    }
    return 0;
}