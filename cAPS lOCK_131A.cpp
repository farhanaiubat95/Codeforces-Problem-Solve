#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0,d=0;
   string s;
   cin>>s;
   for(int i=1;i<s.size();i++)
   {
        if(islower(s[i]))
        {
            c++;
        }
   }
   if(islower(s[0]) && c==0)
   {
       s[0]=toupper(s[0]);
       for(int i=1;i<s.size();i++)
      {
        s[i]=tolower(s[i]);
      }
   }else if(isupper(s[0]) && c==0)
   {
      transform(s.begin(),s.end(),s.begin(), :: tolower);
   }
   cout<<s<<endl;
}

