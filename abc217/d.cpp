#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int l,q;
	set<int> s;
	scanf("%d %d",&l,&q);
	s.insert(0);
	s.insert(l);
	for(int i=0;i<q;i++){
		int c,x;
		scanf("%d %d",&c,&x);
		if(c==1){
			s.insert(x);
		}
		else {
			auto ans=s.lower_bound(x);
			printf("%d\n",*ans-*prev(ans));
		}
	}
	return 0;
}