#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s,t,p,c="";
    cin>>s;
    cin>>t;
    cin>>p;
    c=s+t;
    sort(c.begin(),c.end());
    sort(p.begin(),p.end());

   if(c==p)
   {
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }



}

