#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,a,b,c;
    scanf("%d %d",&n,&k);
    vector<int> p(n,0),s(n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        s[i]=p[i]=(a+b+c);
    }
    sort(s.begin(),s.end(),greater<int>());
    k--;
    for(int i=0;i<n;i++){
        if((p[i]+300)>=s[k]){
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    return 0;
}