#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int h1,a1,c1,h2,a2,i;
    vector<int> moves;
    cin>>h1>>a1>>c1;
    cin>>h2>>a2;
    while(h2>0)
    {
        if(h1<=a2 && h2>a1)
        {
            h1+=c1;
            moves.push_back(0);
        }
        else
        {
            h2-=a1;
            moves.push_back(1);
        }
        if(h2>0)
            h1-=a2;
    }
    cout<<moves.size()<<"\n";
    for(i=0;i<moves.size();i++)
    {
        if(moves[i]==0)
            cout<<"HEAL\n";
        else
            cout<<"STRIKE\n";
    }
    return 0;
}