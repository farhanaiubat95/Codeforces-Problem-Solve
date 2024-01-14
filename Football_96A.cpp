#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int p=0,q=0,c=0;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='0' )
       {
          p++;
          q=0;
       }else{
         q++;
         p=0;
       }
         if( p==7 ||  q==7)
   {
       c=1;
   }
   }
   if(c==1)
   {
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }


}









