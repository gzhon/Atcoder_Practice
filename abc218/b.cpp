#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char p[27];
	for(int i=0;i<26;i++){
		scanf("%d",&p[i]);
	}
	for(int i=0;i<26;i++){
		printf("%c",p[i]+96);
	}
	printf("\n");
	return 0;
}