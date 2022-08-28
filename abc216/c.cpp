#include<bits/stdc++.h>
using namespace std;
using Vlog=long long;
int main(void)
{
	Vlog n;
	string ans;
	scanf("%lld",&n);
	while(n>0){
		if(n%2!=0){
			n=n-1;
			ans+='A';
		}
		else {
			n=n/2;
			ans+='B';
		}
	}
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
	return 0;
}