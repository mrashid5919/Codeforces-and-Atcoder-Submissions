//Incomplete
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sum=0;
        n=s.size();
        set<char> st;
        for(i=0;i<n;i++)
        {
            if(st.count(s[i]))
            {
                sum+=st.size()-1;
                st.clear();
            }
            else
                st.insert(s[i]);
        }
        sum+=st.size();
        st.clear();
        cout<<sum<<"\n";
    }
    return 0;
}
