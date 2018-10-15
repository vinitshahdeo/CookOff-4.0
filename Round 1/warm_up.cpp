/* 
Author - Vinit Shahdeo 
Copyright - CodeChef VIT Chapter
*/
#include <bits/stdc++.h>
using namespace std;
string myfunc(string s)
{
    stack<char> stk;
    for(int i=0;i<s.size();i++)
    {
        if(stk.empty())
        stk.push(s[i]);
        else
        {
            if(stk.top()==s[i])
            continue;
            else
            stk.push(s[i]);
        }
    }
    string ans="";
    while(!stk.empty())
    {
        ans+=stk.top();
        stk.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<myfunc(s)<<endl;
    }
    return 0;
}