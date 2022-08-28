#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n,dig=0;
    scanf("%lld",&n);
    vector<long long> v(n);
    for(int i=0;i<n;i++) scanf("%lld",&v[i]);
    while(dig+1<n&&v[dig]<v[dig+1]){
        dig++;
    }
    printf("%lld\n",v[dig]);
    return 0;
}