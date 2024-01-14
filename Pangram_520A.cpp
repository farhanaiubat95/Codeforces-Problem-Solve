#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,c=0;
   string s;
   cin>>n;
   cin>>s;
   transform(s.begin(),s.end(),s.begin(), :: tolower);
   sort(s.begin(),s.end());
   s.erase(unique(s.begin(),s.end()),s.end());
  for(int i=0;i<s.size();i++)
  {
   for(unsigned char j=97;j<=122;j++)
   {
         if(s[i]==j)
         {
             c++;
         }
   }
  }
  if(c==26)
  {
      cout<<"YES"<<endl;
  }else{
       cout<<"NO"<<endl;
  }
}











