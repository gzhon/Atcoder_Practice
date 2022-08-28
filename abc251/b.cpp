#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,w,q;
    scanf("%d %d",&n,&w);
    vector<int> v(n),s(w+1,0);
    for(int i=0;i<n;i++) scanf("%d",&v[i]);
    for(int i=0;i<n;i++){
        q=v[i];
        if(q<=w) s[q]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            q=v[i]+v[j];
            if(q<=w) s[q]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                q=v[i]+v[j]+v[k];
                if(q<=w) s[q]=1;
            }
        }
    }
    cout<<count(s.begin(),s.end(),1)<<endl;
    return 0;
}