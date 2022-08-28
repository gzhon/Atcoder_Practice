#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    scanf("%d",&n);
    double ans=0,time=0;
    vector<double> a(n),b(n);
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&a[i],&b[i]);
    }
    for(int i=0;i<n;i++) time+=a[i]/b[i];
    time=time/2;
    for(int i=0;i<n;i++){
        ans+=min(a[i],time*b[i]);
        time-=min(a[i]/b[i],time);
    }
    cout<<fixed<<setprecision(50)<<ans<<endl;
    return 0;
}