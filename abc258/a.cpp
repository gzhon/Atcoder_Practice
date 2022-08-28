#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int k;
    string h="21:";
    scanf("%d",&k);
    if(k>=60){
        k-=60;
        h="22:";
    }
    if(k<10){
        cout<<h<<"0"<<to_string(k)<<endl;
    }
    else {
        cout<<h<<to_string(k)<<endl;
    }
    return 0;
}