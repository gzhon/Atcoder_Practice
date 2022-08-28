#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long long day=0,sum=1,n;
	scanf("%lld",&n);
	while(n>=sum){
		day++;
		sum+=day;
	}
	printf("%lld\n",day);
	return 0;
}	