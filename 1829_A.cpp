#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    string r="codeforces";
    while(n--)
    {
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=r[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }



}


