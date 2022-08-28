#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);
    struct {
        int operator()(int s,int t,int x){
            for(int i=s;i!=t;i=(i+1)%24){
                if(x==i){
                    return true;
                }
            }
            return false;
        }
    }solve;
    if(solve(s,t,x)==true){
        puts("Yes");
    }
    else {
        puts("No");
    }
    return 0;
}