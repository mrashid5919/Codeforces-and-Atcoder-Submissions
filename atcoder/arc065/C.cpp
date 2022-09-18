// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int i,p=0,f=0,n;
    string s,t;
    cin>>s;
    n=s.size();
    reverse(s.begin(),s.end());
    while(f!=n)
    {
        //cout<<f<<"\n";
        if(s[f]=='r')
        {
            if(f+6<=n)
            {
                t=s.substr(f,6);
                if(t=="resare")
                {
                    f=f+6;
                    continue;
                }
            }
            if(f+7<=n)
            {
                t=s.substr(f,7);
                if(t=="remaerd")
                {
                    f=f+7;
                    continue;
                }
            }
            p=1;
            break;
        }
        else if(s[f]=='e')
        {
            if(f+5<=n)
            {
                t=s.substr(f,5);
                if(t=="esare")
                {
                    f=f+5;
                    continue;
                }
            }
            p=1;
            break;
        }
        else if(s[f]=='m')
        {
            if(f+5<=n)
            {
                t=s.substr(f,5);
                if(t=="maerd")
                {
                    f=f+5;
                    continue;
                }
            }
            p=1;
            break;
        }
        else
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
    return 0;
}