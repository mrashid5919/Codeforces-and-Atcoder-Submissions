#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,q,d,k,i,a1,n1,a2,n2;
    cin>>t;
    while(t--)
    {
        a1=1;
        n1=0;
        n2=0;
        a2=1;
        string s;
        cin>>q;
        while(q--)
        {
            cin>>d>>k>>s;
            if(n2>0)
            {
                cout<<"YES"<<"\n";
                continue;
            }
            if(d==1)
            {
                for(i=0;i<s.size();i++)
                {
                    if(s[i]=='a')
                        a1+=k;
                    else
                    {
                        n1=1;
                        break;
                    }
                }
                if(n1>0)
                {
                    cout<<"NO"<<"\n";
                }
                else
                {
                    if(a1<a2)
                        cout<<"YES"<<"\n";
                    else
                        cout<<"NO"<<"\n";
                }
            }
            else
            {
                for(i=0;i<s.size();i++)
                {
                    if(s[i]=='a')
                        a2+=k;
                    else
                    {
                        n2=1;
                        break;
                    }
                }
                if(n2>0)
                {
                    cout<<"YES"<<"\n";
                }
                else
                {
                    if(n1>0)
                        cout<<"NO"<<"\n";
                    else if(a1<a2)
                        cout<<"YES"<<"\n";
                    else
                        cout<<"NO"<<"\n";
                }
            }
        }

    }
    return 0;
}
