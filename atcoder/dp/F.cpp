#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int l[3005][3005];

int lcs(string &a,string &b)
{
    int n=a.size();
    int m=b.size();
    for(int i=0;i<n;i++)
        l[i][0]=0;
    for(int i=0;i<m;i++)
        l[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                l[i][j]=l[i-1][j-1]+1;
            }
            else if(l[i-1][j]>=l[i][j-1])
            {
                l[i][j]=l[i-1][j];
            }
            else
            {
                l[i][j]=l[i][j-1];
            }
        }
    }
    return l[n][m];
}

void printLCS(string &a,string &b)
{
    int n=a.size();
    int m=b.size();
    int idx=l[n][m];
    char s[idx+1];
    s[idx]='\0';
    while(n!=0 && m!=0)
    {
        //cout<<idx<<"\n";
        if(a[n-1]==b[m-1])
        {
            s[idx-1]=a[n-1];
            n--;
            m--;
            idx--;
        }
        else if(l[n-1][m]>=l[n][m-1])
            n--;
        else
            m--;
    }
    cout<<s;
}

int main()
{
    string a,b;
    cin>>a>>b;
    lcs(a,b);
    printLCS(a,b);
    return 0;
}
