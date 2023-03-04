#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,x,cur;
    string s,cr;
    cin>>t;
    while(t--)
    {
        cur=0;
        cin>>n;
        cin.get();
        getline(cin,s);
        x=s.size();
        vector<string> vect;
        for(i=0;i<x;i++)
        {
            if(i==x-1)
            {
                cur++;
                cr.push_back(s[i]);
                if(cur==n-1)
                    vect.push_back(cr);
                cr.clear();
                cur=0;
            }
            else if(s[i]==' ')
            {
                if(cur==n-1)
                    vect.push_back(cr);
                cr.clear();
                cur=0;
            }
            else
            {
                cur++;
                cr.push_back(s[i]);
            }
        }
        int flag=0;
        //cout<<vect[0]<<" "<<vect[1]<<"\n";
        for(i=1;i<n-1;i++)
        {
            if(vect[0][i]!=vect[1][i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cr=vect[0];
            cr.push_back(vect[1][n-2]);
        }
        else
        {
            cr=vect[1];
            cr.push_back(vect[0][n-2]);
        }
        //cout<<cr<<"\n";
        string r=cr;
        reverse(r.begin(),r.end());
        //cout<<r<<"\n";
        flag=0;
        for(i=0;i<n;i++)
        {
            if(cr[i]!=r[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        cr.clear();
    }
    return 0;
}
