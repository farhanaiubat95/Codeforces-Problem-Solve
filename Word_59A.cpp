
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,u;
    for(int i=0;i<s.size();i++)
    {
         if(s[i]>='a'&&s[i]<='z')
         {
            l++;
         }
    }
    u=s.size()-l;
    if(u>l)
    {
        transform(s.begin(),s.end(),s.begin(), :: toupper);
    }else{
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    }
    cout<<s<<endl;

}








