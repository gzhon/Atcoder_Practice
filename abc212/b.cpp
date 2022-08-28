#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	bool flg=true;
	char s[5],p[]="0123456789";
	scanf("%s",s);
	if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){
		flg=false;
	}
	else {
		for(int i=0;i<3;i++){
			if(s[i]=='9') s[i]='0';
			else s[i]++;
			if(s[i]==s[i+1]) flg=false;
			else {
				flg=true;
				break;
			}
		}
	}
	if(flg==true) printf("Strong\n");
	else printf("Weak\n");
	return 0;
}