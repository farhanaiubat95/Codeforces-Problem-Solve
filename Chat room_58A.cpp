
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,s1="hello";
cin>>s;
int c=0,j=0;

for(int i=0;i<s.size();i++)
{
    if(s[i]==s1[j])
    {
        j++;
          if(j==5)
         {
             c=1;
          }
    }
}
         if(c==1)
         {
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
}












