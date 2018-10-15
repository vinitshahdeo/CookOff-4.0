/* 
Author - Vinit Shahdeo 
Copyright - CodeChef VIT Chapter
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int l=s.size();
    int dp[l+1];
    memset(dp,0,sizeof(dp));
    for(int i=l-1;i>=0;i--)
    {
        if((s[i]-'0')%2==0)
        dp[i]=dp[i+1]+1;
        else
        dp[i]=dp[i+1];
    }
    for(int i=0;i<l;i++)
    cout<<dp[i]<<" ";
        cout<<endl;
    }
    
}