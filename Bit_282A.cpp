#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x=0;
  string s;
  cin>>n;
  while(n--)
  {
      cin>>s;
      if(s=="++X")
      {
     ++x;
      }else if (s=="--X"){
      --x;
      }else if (s=="X++"){
      x++;
      }else if (s=="X--"){
      x--;
      }
  }
  cout<<x<<endl;
}

