
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;  
    long long n,t,i,d,cur;
    string s;
    cin>>t;
    while(t--)
    {
        vector<pair<long long,long long> > vect;
        cin>>s;
        n=stoll(s);
        //n=tst;
        if(n==1)
        {
            cout<<9999<<"\n";
            for(i=1;i<=9999;i++)
                cout<<i+1<<" "<<i<<"\n";
            continue;
        }
        //s=to_string(n);
        d=s.size();
        cur=0;
        for(i=1;i<=10;i++)
        {
            // if(d*n==1)
            //     continue;
            cur=cur*10+(s[(i-1)%d]-'0');
            //cout<<cur<<"\n";
            // if(i==5)
            //     cout<<cur<<" "<<(cur-i)/(n-d)<<"\n";
            if((cur-i)%(n-d)==0)
            {
                long long a=(cur-i)/(n-d);
                //cout<<i<<" "<<a<<endl;
                //cout<<cur<<" "<<b<<"\n";
                if(d*a-i<=0)
                    continue;
                if(a>10000)
                {
                    
                    //cout<<i<<endl;
                    break;
                }
                //cout<<a<<" "<<d*a-i<<"\n";
                vect.push_back({a,d*a-i});
            }
        }
        cout<<vect.size()<<"\n";
        for(auto x:vect)
            cout<<x.first<<" "<<x.second<<"\n";
        // for(auto x:vect)
        //     cout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}