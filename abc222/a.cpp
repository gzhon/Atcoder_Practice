#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int len;
	char s[5];
	scanf("%s",s);
	for(int i=0;i<4-strlen(s);i++){
		printf("0");
	}
	printf("%s\n",s);
	return 0;
}