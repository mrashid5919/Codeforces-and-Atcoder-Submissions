#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

void tokenize(string s,  vector<string> &arr, string del = " ")
{
    int start = 0;
    //int cnt=0;
    int end = s.find(del);
    while (end != -1) {
        arr.push_back(s.substr(start, end - start));
        start = end + del.size();
        end = s.find(del, start);
        //cnt++;
    }
    arr.push_back(s.substr(start, end - start));
}


int main()
{
    fastio;
    int n,m,i;
    string s,t;
    vector<string> s1,t1;
    map<string,int> mp;
    cin>>n>>m;
    cin.get();
    getline(cin,s);
    tokenize(s,s1);
    for(i=0;i<n;i++)
        mp[s1[i]]=0;
    getline(cin,t);
    tokenize(t,t1);
    for(i=0;i<m;i++)
        mp[t1[i]]++;
    for(i=0;i<n;i++)
    {
        if(mp[s1[i]]==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}