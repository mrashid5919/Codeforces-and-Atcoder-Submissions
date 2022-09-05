#include <iostream>
using namespace std;

int main() {
    long long n,h,w,a,b,i,cnt=0;
    cin>>n>>h>>w;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>=h && b>=w)
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}