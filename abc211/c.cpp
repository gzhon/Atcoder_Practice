#include<bits/stdc++.h>
#define MAD 1000000007
using namespace std;
int p[100001][9];
int main(void)
{
	int len;
	char s[100001];
	char ss[]="chokudai";
	scanf("%s",s);
	len=strlen(s);
	p[0][0]=1;
	for(int i=0;i<len;i++){
		for(int j=0;j<8;j++){
			p[i+1][j]+=p[i][j];
			p[i+1][j]%=MAD;
			if(s[i]==ss[j]){
				p[i+1][j+1]+=p[i][j];
				p[i+1][j+1]%=MAD;
			}
		}
	}
	int sum=0;
	for(int i=0;i<=len;i++){
		sum+=p[i][8];
		sum%=MAD;
	}
	printf("%d\n",sum);
	return 0;
}