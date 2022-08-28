#include<bits/stdc++.h>
using namespace std;
using Vint=long long;
int main(void)
{
	Vint n,s,x=0,y=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){ 
		scanf("%lld",&s);
		x+=s;
		y+=s*s;
	}
	cout<<n*y-x*x<<endl;
	return 0;
}