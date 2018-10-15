/* 
Author - Vinit Shahdeo 
Copyright - CodeChef VIT Chapter
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<string,int> m;
        int flag=0;
        while(n--)
        {
            string s;
            int x;
            cin>>s>>x;
            
            if(m.find(s)!=m.end())
            {
                if(m[s]<x)
                {
                    m[s]=x;
                    flag=1;
                }
            }
            else
            {
                if(x>=k)
                    m[s]=x;
                else 
                    flag=1;
            }
        }
        if(!flag)
            cout<<"Sorry Winit!";
        else
        {
        map<string,int> ::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        }
    }
    return 0;
}