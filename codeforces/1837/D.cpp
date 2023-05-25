#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,l,r;
    string s;
    cin>>t;
    while(t--)
    {
        l=0;
        r=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
                l++;
            else
                r++;
        }
        if(l!=r)
        {
            cout<<-1<<"\n";
            continue;
        }
        stack<pair<char,long long> > st;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
                st.push(make_pair('(',i));
            else
            {
                if(st.empty())
                    st.push(make_pair(')',i));
                else if(st.top().first=='(')
                {
                    ara[st.top().second]=1;
                    ara[i]=1;
                    st.pop();
                }
                else
                    st.push(make_pair(')',i));
            }
        }
        long long p=1;
        if(st.empty())
        {
            p=1;
            cout<<1<<"\n";
            for(i=0;i<n;i++)
                cout<<1<<" ";
            cout<<"\n";
            continue;
        }
        else if(st.size()==n){
            p=1;
            cout<<1<<"\n";
            for(i=0;i<n;i++)
                cout<<1<<" ";
            cout<<"\n";
            continue;
        }
        else
        {
            p=2;
            reverse(s.begin(),s.end());
            while(!st.empty())
                st.pop();
            for(i=0;i<n;i++)
                if(s[i]=='(')
                    st.push(make_pair('(',i));
                else
                {
                    if(st.empty())
                        st.push(make_pair(')',i));
                    else if(st.top().first=='(')
                    {
                        ara[st.top().second]=1;
                        ara[i]=1;
                        st.pop();
                    }
                    else
                        st.push(make_pair(')',i));
                }
            }
        long long x;
        if(st.size()==n || st.size()==0){
            if(p==2)
                cout<<1<<"\n";
            x=1;
        }
        else{
            x=2;
            cout<<2<<"\n";
        }
        while(!(st.empty()))
        {
            ara[st.top().second]=x;
            st.pop();
        }
        for(i=n-1;i>=0;i--)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
