#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	char s[5];
	scanf("%d %s",&n,s);
		printf("%d",n);
	if(s[1]=='0'||s[1]=='1'||s[1]=='2'){
		printf("-\n");
	}
	if(s[1]=='3'||s[1]=='4'||s[1]=='5'||s[1]=='6'){
		printf("\n");
	}
	if(s[1]=='7'||s[1]=='8'||s[1]=='9'){
		printf("+\n");
	}
	return 0;
}