#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double a,b,d,x,d1,a2,d2,b2;
    scanf("%lf %lf %lf",&a,&b,&d);
    x=sqrt(a*a+b*b);
    if(x==0.0) printf("0 0\n");
    else {
        d1=acos(a/x);
        if(b<0) d1=M_PI*2-d1;
        //radなので180掛ける
        d2=d*M_PI/180.0;
        d2=d2+d1;
        a2=x*cos(d2);
        b2=x*sin(d2);
        printf("%.15lf %.15lf\n",a2,b2);
    }
    return 0; 
}