#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int c=0,n;
   cin>>s;
    sort(s.begin(),s.end());
   s.erase( unique( s.begin(), s.end() ), s.end() );
    n=s.size();
   if(n%2==0)
   {
       cout<<"CHAT WITH HER!"<<endl;
   }else{
       cout<<"IGNORE HIM!"<<endl;
   }
}




