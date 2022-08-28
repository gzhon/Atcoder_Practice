#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char s[5][3],p[5];
	s[0][0]='H'; s[0][1]='\0';
	s[1][0]='2'; s[1][1]='B'; s[1][2]='\0';
	s[2][0]='3'; s[2][1]='B'; s[2][2]='\0';
	s[3][0]='H'; s[3][1]='R'; s[3][2]='\0';
	int ans=0,flg[5];
	for(int i=0;i<4;i++){
		flg[i]=0;
	}
	for(int i=0;i<4;i++){
		scanf("%s",p);
		for(int j=0;j<4;j++){
			if(((strcmp(p,s[j]))==0)&&(flg[j]==0)){
				ans++;
				flg[j]=1;
				break;
			}
		}
	}
	if(ans==4){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}