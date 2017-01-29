#include<bits/stdc++.h>
using namespace std;
int n,r;
string str,arr;
map<string,int>mp;
void combination(int pos,int last)
{

    if(pos==r)
    {
        if(mp.empty()||mp[arr]!=1)
        {
            mp[arr]=1;
            cout<<arr<<"\n";
        }
        return;
    }
    for(int i=last+1; i<=n-r+pos; i++)
    {
        arr[pos]=str[i];
        combination(pos+1,i);
    }
}

int main()
{
    while(cin>>str>>r)
    {
        mp.clear();
        arr="";
        n=str.length();
        combination(0,-1);
    }
    return 0;
}
