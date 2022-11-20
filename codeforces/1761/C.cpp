#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j;
    char ara[200][200];
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vect[n+5];
        for(i=1;i<=n;i++)
        {
            vect[i].push_back(i);
            for(j=1;j<=n;j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]=='1')
                {
                    vect[j].push_back(i);
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<vect[i].size()<<" ";
            sort(vect[i].begin(),vect[i].end());
            for(j=0;j<vect[i].size();j++)
                cout<<vect[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
