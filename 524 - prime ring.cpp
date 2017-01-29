#include<bits/stdc++.h>
using namespace std;
int sieve[]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0};
int vis[20]={0};
int arr[20]={0};
int n;
void primeRing(int pos)
{
    if(pos==n)
    {
        if(sieve[arr[pos-1]+arr[0]])
        {
            cout<<arr[0];
            for(int i=1; i<n; i++)
                cout<<" "<<arr[i];
            cout<<"\n";
        }
        return;
    }
    else if(pos==0)
    {
        arr[pos]=1;
        vis[1]=1;
        primeRing(pos+1);
        return;
    }
    for(int i=2; i<=n; i++)
    {
        if(vis[i]==0&&sieve[arr[pos-1]+i])
        {
            vis[i]=1;
            arr[pos]=i;
            primeRing(pos+1);
            vis[i]=0;
        }
    }
}
int main()
{
    int tcase = 0;
    while(cin>>n)
    {
        tcase++;
        if(tcase!=1)
            cout<<"\n";
        cout<<"Case "<<tcase<<":\n";
        primeRing(0);
    }
    return 0;
}
