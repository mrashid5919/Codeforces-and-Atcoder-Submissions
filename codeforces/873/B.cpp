#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[100005];

int main()
{
    fastio;
    int n,i,c=0,mx=0;
    string s;
    cin>>n;
    cin>>s;
    vector<pair<int,int> > vect;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            c++;
        else
            c--;
        //cout<<c<<" "<<i<<"\n";
        vect.push_back(make_pair(c,i));
    }
    if(c==0)
    {
        cout<<n<<"\n";
        return 0;
    }
    sort(vect.begin(),vect.end());
    c=0;
    for(i=1;i<n;i++)
    {
        if(vect[i].first==0)
        {
            mx=max(mx,vect[i].second+1);
        }
        else if(vect[i].first==vect[i-1].first){
            c+=vect[i].second-vect[i-1].second;
            mx=max(mx,c);
        }
        else
        {
            c=0;
        }
    }
    cout<<mx<<"\n";
    return 0;
}
