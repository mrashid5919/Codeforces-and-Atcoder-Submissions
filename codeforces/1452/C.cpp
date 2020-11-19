#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,l1,l2,ans;
    string bracket;
    cin>>t;
    while(t--)
    {
        l1=0;
        l2=0;
        ans=0;
        cin>>bracket;
        n=bracket.size();
        for(i=0;i<n;i++)
        {
            if(bracket[i]=='(')
                l1++;
            else if(bracket[i]=='[')
                l2++;
            else if(bracket[i]==')')
            {
                if(l1>0)
                {
                    ans++;
                    l1--;
                }
            }
            else
            {
                if(l2>0)
                {
                    ans++;
                    l2--;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
