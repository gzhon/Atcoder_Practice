#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int x,v=0;
    priority_queue<int> q;
    for(int i=0;i<5;i++){ cin>>x; q.push(x); }
    x=q.top(); q.pop();
    while(x==q.top()){ q.pop(); v++; }
    cout<<q.size()<<endl;
    while(x==q.top()){ q.pop(); v++; }
    if(v==2||v==3) puts("Yes");
    else puts("No");
    return 0;
}