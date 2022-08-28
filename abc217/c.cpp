#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	n++;
	vector<int> p(n),q(n);
	for(int i=1;i<n;i++){
		cin>>p[i];
	}
	for(int i=1;i<n;i++){
		q[p[i]]=i;
	}
	for(int i=1;i<n;i++){
		printf("%d ",q[i]);
	}
	printf("\n");
	return 0;
}