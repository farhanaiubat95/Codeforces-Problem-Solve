#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int c;
  cin>>s;
     for(int i=s.size()-1;i>=0;i--)
     {
         if(s[i]==s[i+1])
         {
             s.erase(s.begin()+i,s.begin()+(i+2));
                c=s.size();
         }
     }
     cout<<s<<endl;
}

