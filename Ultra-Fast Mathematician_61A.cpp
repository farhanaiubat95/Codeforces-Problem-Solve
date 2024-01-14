#include <bits/stdc++.h>
using namespace std;

int main()
{
     string s1,s2,s3;
     cin>>s1;
     cin>>s2;
     for(int i=0;i<s1.size();i++)
     {
         if(s1[i]==s2[i])
         {
             s1[i]='0';
         }else if(s1[i]!=s2[i])
         {
             s1[i]='1';
         }
     }
     cout<<s1<<endl;
}











