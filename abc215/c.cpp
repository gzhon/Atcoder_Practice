#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	string s;
	map<string,int> p;
	cin>>s>>n;
	sort(s.begin(),s.end());
	int i=0;
	while(1){
		if(p[s]!=1){
			p[s]=1;
			i++;
			if(i==n) break;
		}
		if(!(next_permutation(s.begin(),s.end()))){
			break;
		}
	}
	cout<<s<<endl;
	return 0;
}