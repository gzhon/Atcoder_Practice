#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int  n;
    double ans=0,a,b;
    scanf("%d",&n);
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a=x[i]-x[j]; b=y[i]-y[j];
            ans=max(ans,sqrt(a*a+b*b));
        }
    }
    printf("%lf\n",ans);
    return 0;
}