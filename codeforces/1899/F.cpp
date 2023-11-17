#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,q,i,j,d[600],cur,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=0;i<q;i++)
            cin>>d[i];
        for(i=1;i<n;i++)
            cout<<i<<" "<<i+1<<"\n";
        cur=n-1;
        stack<int> st,st2;
        for(i=1;i<=n;i++)
            st.push(i);
        st2.push(2);
        for(i=0;i<q;i++)
        {
            if(d[i]==cur)
            {
                cout<<-1<<" "<<-1<<" "<<-1<<"\n";
                continue;
            }
            else if(d[i]<cur)
            {
                vector<int> vect;
                for(j=0;j<cur-d[i];j++)
                {
                    x=st.top();
                    vect.push_back(x);
                    st.pop();
                }
                cout<<x<<" "<<st.top()<<" "<<st2.top()<<"\n";
                for(j=vect.size()-1;j>=0;j--)
                {
                    st2.push(vect[j]);
                }
                //cout<<st2.top()<<"\n";
                cur=d[i];
            }
            else
            {
                // cout<<st2.top()<<" ";
                // x=st2.top();
                // st2.pop();
                // cout<<st2.top()<<" "<<st.top()<<"\n";
                vector<int> vect;
                for(j=0;j<d[i]-cur;j++)
                {
                    x=st2.top();
                    vect.push_back(x);
                    st2.pop();
                }
                cout<<x<<" "<<st2.top()<<" "<<st.top()<<"\n";
                for(j=vect.size()-1;j>=0;j--)
                    st.push(vect[j]);
                cur=d[i];
            }
        }
    }
    return 0;
}