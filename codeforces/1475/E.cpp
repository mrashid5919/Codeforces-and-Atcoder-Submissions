#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

unsigned long long fac[1050],cnt[1050];
 
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x, 
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,  
                                            int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

int main()
{
    fastio;
    unsigned long long t,n,k,i,cur,M=1000000007,ara[1005],ans;
    fac[0] = 1;
    for (int i = 1; i <= 1000; i++)
        fac[i] = (fac[i - 1] * i) % M;
    cin>>t;
    while(t--)
    {
        ans=1;
        cin>>n>>k;
        for(i=1;i<=n;i++)
            cnt[i]=0;
        cur=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            cnt[ara[i]]++;
        }
        sort(ara,ara+n,greater<unsigned long long>());
        for(i=0;i<n;i++)
        {
            if(i!=0 && ara[i]==ara[i-1])
                continue;
            if(cur+cnt[ara[i]]<=k)
            {
                cur+=cnt[ara[i]];
            }
            else
            {
                ans=(ans*nCrModPFermat(cnt[ara[i]],k-cur,M))%M;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}