#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long x=0,y=0,defx=0,defy=0,n,i,a[40]={0},b[40]={0},p=0;
    string s,t;
    cin>>s;
    cin>>t;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='@')
            x++;
        else
            a[s[i]-'a']++;
        if(t[i]=='@')
            y++;
        else
            b[t[i]-'a']++;
    }
    if(a[0]<b[0])
        defx+=b[0]-a[0];
    else
        defy+=a[0]-b[0];
    if(a[2]<b[2])
        defx+=b[2]-a[2];
    else
        defy+=a[2]-b[2];
    if(a[4]<b[4])
        defx+=b[4]-a[4];
    else
        defy+=a[4]-b[4];
    if(a[3]<b[3])
        defx+=b[3]-a[3];
    else
        defy+=a[3]-b[3];
    if(a[14]<b[14])
        defx+=b[14]-a[14];
    else
        defy+=a[14]-b[14];
    if(a[17]<b[17])
        defx+=b[17]-a[17];
    else
        defy+=a[17]-b[17];
    if(a[19]<b[19])
        defx+=b[19]-a[19];
    else
        defy+=a[19]-b[19];
    if(defx>x || defy>y)
        cout<<"No\n";
    else
    {
        for(i=0;i<26;i++)
        {
            if(i==0 || i==2 || i==3 || i==4 || i==14 || i==17 || i==19)
                continue;
            if(a[i]!=b[i])
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
