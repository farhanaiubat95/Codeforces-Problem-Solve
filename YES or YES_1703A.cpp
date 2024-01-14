#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   int n,c=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>s;
       transform(s.begin(),s.end(),s.begin(), :: tolower);
       if(s=="yes")
       {
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }

}

