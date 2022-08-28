#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int x;
	cin>>x;
	if(x<40){
		printf("%d\n",abs(x-40));
	}
	else if(x<70){
		printf("%d\n",abs(x-70));
	}
	else if(x<90){
		printf("%d\n",abs(x-90));
	}
	else {
		printf("expert\n");
	}
	return 0;
}