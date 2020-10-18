#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long n;
    string str;
    cin>>str;
    n=str.size();
    cout<<3<<"\n";
    cout<<"L"<<" "<<2<<"\n";
    cout<<"R"<<" "<<2<<"\n";
    cout<<"R"<<" "<<2*(n+1)-3<<"\n";
    return 0;
}
