#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        if(s[0]==s[n-1])
        {
            cout<<s[0]<<" ";
            for(i=1;i<n-1;i++)
                cout<<s[i];
            cout<<" "<<s[n-1]<<"\n";
        }
        else
        {
            int f=-1;
            for(i=1;i<n-1;i++)
            {
                if(s[i]=='a')
                {
                    f=i;
                    break;
                }
            }
            if(f!=-1)
            {
                for(i=0;i<f;i++)
                cout<<s[i];
                cout<<" a ";
                for(i=f+1;i<n;i++)
                    cout<<s[i];
                cout<<"\n";
            }
            else
            {
                cout<<s[0]<<" ";
            for(i=1;i<n-1;i++)
                cout<<s[i];
            cout<<" "<<s[n-1]<<"\n";
            }
        }
    }
    return 0;
}
