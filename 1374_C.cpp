#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int c=0,t;
        string s;
        cin>>t>>s;
        for(int i=0;i<t;i++)
        {
            if(s[i]=='(')
            {
                c++;
            }else if(s[i]==')' && c )
            {
                c--;
            }
        }
        cout<<c<<endl;
    }
}



