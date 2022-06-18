#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,cap[35],sm[35],dig[15],cnt,M=1000000007;
    string s;
    cin>>n;
        cin>>s;
        cnt=1LL;
        for(i=0;i<26;i++)
        {
            cap[i]=0;
            sm[i]=0;
            if(i<10)
                dig[i]=0;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                cap[s[i]-'A']++;
            else if(s[i]>='a' && s[i]<='z')
                sm[s[i]-'a']++;
            else if(s[i]>='0' && s[i]<='9')
                dig[s[i]-'0']++;
        }
        for(i=0;i<26;i++)
        {
            cnt=((cnt%M)*((cap[i]+1)%M))%M;
            cnt=((cnt%M)*((sm[i]+1)%M))%M;
            if(i<10)
                cnt=((cnt%M)*((dig[i]+1)%M))%M;
        }
        cnt=(cnt-1)%M;
        cout<<cnt<<"\n";
    return 0;
}
