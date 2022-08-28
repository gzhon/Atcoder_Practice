#include<bits/stdc++.h>
#define mid 998244353
using namespace std;
using let=long long;
int main(void){

    let n,count=0;
    cin>>n;
    while(n%mid!=0){ n--; count++;}
    cout<<count<<endl;
    return 0;
}