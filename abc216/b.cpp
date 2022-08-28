#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	string x="No";
	vector<string> s(n),p(n);
	for(int i=0;i<n;i++){
		cin>>s[i]>>p[i];
		for(int j=0;j<i;j++){
			if(s[i]==s[j]){
				if(p[i]==p[j]){
					x="Yes";
				}
			}
		}
	}
	cout<<x<<endl;
	return 0;
}