#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
using let=bool;
using var=long long;
int main(void){

    var x,a,d,n,b;
    cin>>x>>a>>d>>n;
    var l=a+d*(n-1);
    if(d<0){ d=-d; swap(a,l);}
    if(x<=a) b=a-x;
    else if(x>=l) b=x-l;
    else {
        b=(x-a)%d;
        b=min(b,d-b);
    }
    cout<<b<<endl;
    let bit=true;
    for(;;){
        sleep(0.6);
        if(bit) puts("数学ﾜｶﾝﾈ\\(^o^)/");
        else puts("数学ﾜｶﾝﾈ/(^o^)\\");
        bit=!bit;
    }
    return 0;
}