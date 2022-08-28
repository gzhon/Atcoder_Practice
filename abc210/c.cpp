#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	map<int,int> mp;
	int n,k,c[300001],sum,mx;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&c[i]);
	for(int i=0;i<k;i++) mp[c[i]]++;
	sum=mp.size();
	mx=sum;
	for(int i=0;i<n-k;i++){
		mp[c[i]]--;
		if(mp[c[i]]==0)  sum--;
		mp[c[i+k]]++;
		if(mp[c[i+k]]==1)sum++;
		mx=max(mx,sum);
	}
	printf("%d\n",mx);
	return 0;
}