#include<bits/stdc++.h>
using namespace std;
char s[100001];
int main(void)
{
	int n;
	scanf("%d %s",&n,s);
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(s[i]=='1'){
				printf("Takahashi\n");
				return 0;
			}
		}
		else {
			if(s[i]=='1'){
				printf("Aoki\n");
				return 0;
			}
		}
	}
	return 0;
}