#include<bits/stdc++.h>
using namespace std;
bool check(int s,int t){

    if((s>=1&&t>=s)||s==t) return false;
    else return true;
}
int main(void)
{
    string vs,vt;
    int s_len=0,t_len=0,ip;
    char s[200001],t[200001],p;
    scanf("%s %s",s,t);
    t_len=strlen(t);
    s_len=strlen(s);
    vector<int> sm(s_len),tm(t_len);
    p=s[0]; ip=0; vs+=p;
    for(int i=1;i<s_len;i++){
        if(p!=s[i]){
            ip++; vs+=s[i]; p=s[i];
        }
        else sm[ip]++;
    }
    p=t[0]; ip=0; vt+=p;
    for(int i=1;i<t_len;i++){
        if(p!=t[i]){
            ip++; vt+=t[i]; p=t[i];
        }
        else tm[ip]++;
    }
    bool flg=true;
    if(vs==vt){
        for(int i=0;i<vs.size();i++){
            if(check(sm[i],tm[i])){            
                flg=false; break;
            }
        }
    }
    else  flg=false;
    if(flg) puts("Yes");
    else puts("No");
    return 0;
}