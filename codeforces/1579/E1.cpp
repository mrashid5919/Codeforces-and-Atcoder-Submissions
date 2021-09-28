#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int p[200005];

int main()
{
    fastio;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>p[i];
        deque<int> ara;
        for(i=0; i<n; i++)
        {
            //cout<<p[i]<<" ";
            if(i==0)
                ara.push_back(p[i]);
            else if(p[i]<ara.front())
                ara.push_front(p[i]);
            else
                ara.push_back(p[i]);
        }
        //cout<<ara.size()<<"\n";
        deque <int> :: iterator it;
        for (it = ara.begin(); it != ara.end(); ++it)
            cout <<*it<<" ";
        cout << '\n';
    }
    return 0;
}
