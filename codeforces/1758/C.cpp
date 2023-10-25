#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200010];

int main()
{
    fastio;
    long long t,n,x,i,c,d,p,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n%x!=0)
        {
            cout<<-1<<"\n";
            continue;
        }
        /*p=0;
        c=1;
        for(i=1;;i++)
        {
            c*=x;
            if(c>n)
                break;
            if(c==n)
            {
                p=1;
                break;
            }
        }*/
        ara[1]=x;
        ara[n]=1;
        /*set<long long> st;
        for(i=2;i<=n;i++)
        {
            if(i==x)
                continue;
            st.insert(i);
        }
        for(i=n-1;i>1;i--)
        {
            if(*(st.rbegin())%i==0 && i%x==0)
            {
                ara[i]=*(st.rbegin());
                st.erase(*(st.rbegin()));
            }
            else
            {
                ara[i]=i;
                st.erase(i);
            }
        }*/
        for(i=2;i<n;i++)
        {
            if(i==x)
                ara[i]=n;
            else
                ara[i]=i;
        }
        vector<long long> mult;
        c=n/x;
        for(i=2;i*i<=c;i++)
        {
            if(c==1)
                break;
            while(c%i==0)
            {
                mult.push_back(i);
                c/=i;
            }
        }
        if(c!=1)
            mult.push_back(c);
        c=x;
        for(i=0;i<mult.size();i++)
        {
            ara[c]=c*mult[i];
            c*=mult[i];
        }
        for(i=1;i<=n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
