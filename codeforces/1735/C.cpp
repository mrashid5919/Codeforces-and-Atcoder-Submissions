//Took help
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,in[30],out[30],x;
    string s;
    cin>>t;
    while(t--)
    {
        for(i=0;i<26;i++)
        {
            in[i]=-1;
            out[i]=-1;
        }
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            x=s[i]-'a';
            if(in[x]==-1)
            {
                for(int j=0;;j++)
                {
                    if(x==j || out[j]!=-1)
                        continue;
                    int w=j;
                    int cnt=0;
                    while(in[w]!=-1)
                    {
                        w=in[w];
                        cnt++;
                    }
                    if(x==w && cnt<25)
                        continue;
                    out[j]=x;
                    in[x]=j;
                    break;
                }
            }
            cout<<(char)(in[x]+'a');
        }
        cout<<"\n";
    }
    return 0;
}
