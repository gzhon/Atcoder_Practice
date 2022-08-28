#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
using let=long long;
int main(void)
{
    let cnt=0;
    let bit=true;
    for(;;){
        cout<<cnt<<" ";
        if(bit) puts("\\(^o^)/");
        else puts("/(^o^)\\");
        bit=!bit;
        cnt++;
    }
    return 0;
}