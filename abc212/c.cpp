#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int a[200001],b[200001];
	int n,m,ans=1000000000;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+m);
	int x=0,y=0;
	while((x<n)&&(y<m)){
		ans=min(ans,abs(a[x]-b[y]));
		if(a[x]>b[y]) y++;
		else x++;
	}
	printf("%d\n",ans);
	return 0;
}