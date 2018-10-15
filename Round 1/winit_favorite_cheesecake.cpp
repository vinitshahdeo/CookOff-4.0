/* 
Author - Vinit Shahdeo 
Copyright - CodeChef VIT Chapter
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(__builtin_popcount(a[i]));
        }
        sort(v.rbegin(),v.rend());
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}