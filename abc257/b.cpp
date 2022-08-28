#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,q;
    scanf("%d %d %d",&n,&k,&q);
    vector<int> a(k+1),l(q);
    for(int i=0;i<k;i++) scanf("%d",&a[i]);
    for(int i=0;i<q;i++) scanf("%d",&l[i]);
    a[k]=n+1;
    for(int i=0;i<q;i++){
        if(a[l[i]-1]<n&&a[l[i]]!=a[l[i]-1]+1) a[l[i]-1]++;
    }
    for(int i=0;i<k;i++) printf("%d ",a[i]);
    puts("");
    return 0;
}