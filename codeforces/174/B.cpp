// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    string s;
    long long n,i,p=0,cur,prev,j;
    vector<string> vect;
    string tmp1,tmp2;
    cin>>s;
    n=s.size();
    cur=n;
    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='.')
        {
            if(i==0)
            {
                p=1;
                break;
            }
            if(cur==n)
            {
               if(i==n-1 || i<n-4)
               {
                   //cout<<i<<"\n";
                   p=1;
                   break;
               }
               else
               {
                   for(j=i+1;j<n;j++)
                        tmp2.push_back(s[j]);
                    cur=i;
               }
            }
            //else if(i==0)
            //{
                //cout<<i<<"\n";
                //p=1;
                //break;
            //}
            else
            {
                if(cur-i<3 || cur-i>12)
                {
                    //cout<<i<<"\n";
                    p=1;
                    break;
                }
                else
                {
                    if(cur-i<=10)
                    {
                        for(j=i+2;j<cur;j++)
                        {
                            tmp1.push_back(s[j]);
                        }
                        tmp1.push_back('.');
                        tmp1.append(tmp2);
                        vect.push_back(tmp1);
                        tmp1.clear();
                        tmp2.clear();
                        tmp2.push_back(s[i+1]);
                    }
                    else
                    {
                        for(j=cur-8;j<cur;j++)
                        {
                            tmp1.push_back(s[j]);
                        }
                        tmp1.push_back('.');
                        tmp1.append(tmp2);
                        vect.push_back(tmp1);
                        tmp1.clear();
                        tmp2.clear();
                        for(j=i+1;j<cur-8;j++)
                            tmp2.push_back(s[j]);
                    }
                    cur=i;
                }
            }
        }
        if(i==0)
        {
            if(cur>8 || cur==n)
            {
                //cout<<cur<<"\n";
                p=1;
                break;
            }
            for(j=0;j<cur;j++)
                tmp1.push_back(s[j]);
            tmp1.push_back('.');
            tmp1.append(tmp2);
            vect.push_back(tmp1);
        }
    }
    if(p==1)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(i=vect.size()-1;i>=0;i--)
            cout<<vect[i]<<"\n";
    }
    return 0;
}
