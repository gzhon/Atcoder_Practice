#include<bits/stdc++.h>
using namespace std;
long long p[1000001],s[1000001];
int main(void)
{
	long long n;
	scanf("%lld",&n);
	for(long long i=0;i<n;i++){
		scanf("%lld",&p[i]);
		s[i]=p[i];
	}
	sort(p,p+n);
	for(long long i=0;i<n;i++){
		if(p[n-2]==s[i]){
			printf("%lld\n",i+1);
			return 0;
		}
	}
	return 0;
}