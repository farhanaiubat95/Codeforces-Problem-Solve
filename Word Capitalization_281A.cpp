#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
    if(s.at(0)>='a' && s.at(0)<='z')
    {
        s[0]=toupper(s[0]);
    }
    cout<<s<<endl;

}



