#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,mx;
    string s;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n>>ch;
        cin>>s;
        vector<long long> vect;
        for(i=0;i<n;i++)
        {
            if(s[i]=='g')
                vect.push_back(i);
        }
        if(ch=='g')
        {
            cout<<0<<"\n";
            continue;
        }
        mx=INT_MIN;
        vector<long long>::iterator up;
        for(i=0;i<n;i++)
        {
            if(s[i]==ch)
            {
                up=upper_bound(vect.begin(),vect.end(),i);
                if(up==vect.end())
                {
                    mx=max(mx,(n-i)+vect[0]);
                }
                else
                {
                    mx=max(mx,vect[up-vect.begin()]-i);
                }
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}
