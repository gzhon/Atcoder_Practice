#include<bits/stdc++.h>
using namespace std;
int main(void){int n,a,b;scanf("%d %d %d",&n,&a,&b);for(int i=0;i<n*a;i++){for(int j=0;j<n*b;j++){if((i/a+j/b)%2==0){printf(".");}else {printf("#");}}printf("\n");}return 0;}