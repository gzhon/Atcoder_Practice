#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int taka=0,aoki=0;
    int a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    for(int i=0;i<x;i++){
        if(i%(a+c)<a) taka+=b;
        if(i%(d+f)<d) aoki+=e;
    }
    if(taka==aoki) puts("Draw");
    else if(taka<aoki) puts("Aoki");
    else puts("Takahashi");
    return 0;
}