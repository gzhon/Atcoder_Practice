#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(0<a&&b==0){
		printf("Gold\n");
	}
	if(a==0&&0<b){
		printf("Silver\n");
	}
	if(0<a&&0<b){
		printf("Alloy\n");
	}
	return 0;
}