#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int temp=0,c=0;
  cin>>s;
  c=s.size();
  for(int i=0;i<c;i+=2)
  {
    for(int j=0;j<c-1;j+=2)
  {
      if(s[j]>s[j+2])
      {
        swap(s[j],s[j+2]);
      }
  }
  }
  cout<<s<<endl;
}


