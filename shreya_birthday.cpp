/* 
Author - Vinit Shahdeo 
Copyright - CodeChef VIT Chapter
*/
#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t,flag;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(!(s[i]=='1'||s[i]=='0'||s[i]=='8'))
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            string s1=s;
            reverse(s.begin(),s.end());
            if(s1==s)
            cout<<"YES!! Please have a RED BULL"<<endl;
            else
            cout<<"SORRY! Better Luck Next time"<<endl;
        }
        
        else
        cout<<"SORRY! Better Luck Next time"<<endl;
    }
}