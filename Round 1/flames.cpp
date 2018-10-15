/* 
Author - Vinit Shahdeo 
Copyright - CodeChef VIT Chapter
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,tot=0;
    string s1,s2;
    cin>>s1>>s2;
    string n1=s1;
    string n2=s2;
    i=s1.size();
    j=s2.size();
    tot=i+j;
    for(i=0;i<s1.size();i++)
    {
        for(j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                    {
                        tot=tot-2;
                        s2[j]='*';
                        break;
                    }
            }
    }
    if(tot == 2 ||tot== 4 || tot==7 ||tot==9 )
        cout<<"Enemy";
    else if( tot == 3 ||tot==5 || tot==14 ||tot==16 || tot==18 )
        cout<<"Friendship";
    else if( tot == 8 || tot==12 || tot==17)
        cout<<"Affection";
    else if( tot == 10)
        cout<<"Love";
    else if( tot == 6 || tot==11 || tot==15)
        cout<<"Marriage";
    else
        cout<<"Sister";
return 0;
}