#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,x,i,ans=0,dif=INT_MAX,med,p;
    cin>>n>>x;
    if(n%2==0)
        med=n/2-1;
    else
        med=n/2;
    vector<int> ara;
    for(i=0; i<n; i++)
    {
        cin>>p;
        ara.push_back(p);
    }
    sort(ara.begin(),ara.end());
    int idx=-1;
    for(i=0; i<n; i++)
    {
        if(ara[i]==x)
        {
            idx=i;
            if(i==med)
                dif=0;
            else if(i<med)
            {
                if(n%2==1)
                    dif=min(dif,2*(med-i)-1);
                else
                    dif=min(dif,2*(med-i));
            }
            else
            {
                if(n%2==1)
                    dif=min(dif,2*(i-med));
                else
                    dif=min(dif,2*(i-med)-1);
            }
        }
    }
    if(idx==-1)
    {
        ara.push_back(x);
        dif=1;
        n++;
        if(n%2==0)
            med=n/2-1;
        else
            med=n/2;
        sort(ara.begin(),ara.end());
        for(i=0; i<n; i++)
        {
            if(ara[i]==x)
            {
                idx=i;
                if(i==med)
                    break;
                else if(i<med)
                {
                    if(n%2==1)
                        dif=2*(med-i);
                    else
                        dif=2*(med-i)+1;
                }
                else
                {
                    if(n%2==1)
                        dif=2*(i-med)+1;
                    else
                        dif=2*(i-med);
                }
            }
        }
    }
    cout<<dif<<"\n";
    return 0;
}
