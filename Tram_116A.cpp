#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a,b,sum=0,mini=0;
 cin>>n;
  for(int i=1;i<=n;i++)
   {
      cin>>a>>b;
      sum=sum+b-a;
      if(sum>mini)
      {
          mini=sum;
      }

    }
   cout<<mini;
}











