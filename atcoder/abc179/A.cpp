#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
   string str;
   int n;
   cin>>str;
   n=str.size();
   if(str[n-1]=='s')
        cout<<str<<"es";
   else
        cout<<str<<"s";
   return 0;
}