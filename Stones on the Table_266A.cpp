#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,c1;
   string s;
   cin>>n;
  cin>>s;
   c1=s.size();
 for(int i=0;i<s.size();i++)
 {
     s[i]=tolower(s[i]);
 }
s.erase(unique(s.begin(),s.end()), s.end());
  c=s.size();
cout<<c1-c;
}






