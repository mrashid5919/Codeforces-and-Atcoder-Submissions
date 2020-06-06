#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int cnt [100005];
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        cnt[x]++;
    }

    for(int i=1;i<=1e5;i++){
        if(cnt[i]%2==1)
        {
            cout<<"Conan\n";
            return 0;
        }
    }
    cout<<"Agasa\n";
    return 0;
}
