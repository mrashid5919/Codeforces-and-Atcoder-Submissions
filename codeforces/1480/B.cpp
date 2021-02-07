#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,n,i,tot,p,x,y;
    static long long ar[100005],br[100005];
    cin>>t;
    while(t--)
    {
        p=0;
        tot=0;
        cin>>a>>b>>n;
        for(i=0;i<n;i++)
            cin>>ar[i];
        for(i=0;i<n;i++)
        {
            cin>>br[i];
            tot+=br[i];
        }
        vector< pair <long long,long long> > vect;
        for (i=0; i<n; i++)
            vect.push_back( make_pair(ar[i],br[i]) );
        sort(vect.begin(), vect.end());
        for(i=0;i<n;i++)
        {
            if(b%vect[i].first==0)
                x=b/vect[i].first;
            else
                x=b/vect[i].first+1;
            if(vect[i].second%a==0)
                y=vect[i].second/a;
            else
                y=vect[i].second/a+1;
            b=b-(min(x,y)*vect[i].first);
            vect[i].second=vect[i].second-(min(x,y)*a);
            if(i!=n-1)
            {
                if(b<=0)
                {
                    p=1;
                    break;
                }
            }
            else if(b<=0 && vect[i].second>0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
