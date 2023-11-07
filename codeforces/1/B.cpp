#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    long long t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        if(s[0]=='R')
        {
            if(s[1]>='A' && s[1]<='Z')
            {
                long long col=0;
                string row;
                for(i=0;i<n;i++)
                {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        col=(col*26)+(s[i]-'A'+1);
                    }
                    else
                    {
                        row.push_back(s[i]);
                    }
                }
                cout<<"R"<<row<<"C"<<col<<"\n";
            }
            else
            {
                int flag=0;
                for(i=2;i<n;i++)
                {
                    if(s[i]=='C')
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    long long col=0;
                    string row;
                    for(i=0;i<n;i++)
                    {
                        if(s[i]>='A' && s[i]<='Z')
                        {
                            col=(col*26)+(s[i]-'A'+1);
                        }
                        else
                        {
                            row.push_back(s[i]);
                        }
                    }
                    cout<<"R"<<row<<"C"<<col<<"\n";
                }
                else
                {
                    string row,colstr;
                    long long idx,col=0;
                    for(i=1;i<n;i++)
                    {
                        if(s[i]=='C')
                        {
                            idx=i;
                            break;
                        }
                        row.push_back(s[i]);
                    }
                    for(i=idx+1;i<n;i++)
                        col=(col*10)+(s[i]-'0');
                    long long ext=0;
                    while(col!=0)
                    {
                        if(col%26==0){
                            colstr.push_back('Z');
                            ext=1;
                            col/=26;
                            col--;
                        }
                        else{
                            colstr.push_back('A'+(col%26)-1);
                            ext=0;
                            col/=26;
                        }
                        //col/=26;

                    }
                    reverse(colstr.begin(),colstr.end());
                    cout<<colstr<<row<<"\n";
                }
            }
        }
        else
        {
            long long col=0;
            string row;
            for(i=0;i<n;i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    col=(col*26)+(s[i]-'A'+1);
                }
                else
                {
                    row.push_back(s[i]);
                }
            }
            cout<<"R"<<row<<"C"<<col<<"\n";
        }
    }
}