#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p=0,q=0;
  cin>>n;
  string s;
  cin>>s;
     for(int i=0;i<s.size();i++)
   {
      s[i]=toupper(s[i]);
   }
   for(int i=0;i<s.size();i++)
   {
      if(s[i]=='A')
      {
          p++;
      }else if(s[i]=='D')
      {
           q++;
      }
   }
   if(p>q)
   {
       cout<<"Anton"<<endl;
   }else if(p==q)
   {
       cout<<"Friendship"<<endl;
   }else{
       cout<<"Danik"<<endl;
   }

}










