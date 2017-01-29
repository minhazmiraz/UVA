//http://ideone.com/zSW8NG

#include<bits/stdc++.h>
using namespace std;
int m,n;
int adj[20][20];
int vis[20];
int arr[20];
int flag;
void Adj(int pos)
{
    if(pos==0)
    {
        arr[pos]=1;
        vis[1]=1;
        Adj(pos+1);
        return;
    }
    else if(pos>n)
    {
        flag=1;
        cout<<"("<<arr[0];
        for(int i=1;i<=n;i++)
        {
            cout<<","<<arr[i];
        }
        cout<<")";
        cout<<"\n";
        return;
    }
    for(int i=2;i<=m;i++)
    {
        if(!vis[i]&&adj[arr[pos-1]][i])
        {
            vis[i]=1;
            arr[pos]=i;
            Adj(pos+1);
            vis[i]=0;
        }
    }
}
int main()
{
    int tcase=0;
    while(cin>>m>>n)
    {
        tcase++;
        memset(adj,-1,sizeof(adj[0][0])*m*m);
        memset(vis,0,sizeof(vis));
        flag=0;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=m;j++)
                cin>>adj[i][j];
        if(tcase!=1)
            cout<<"\n";
        Adj(0);
        if(!flag)
            cout<<"no walk of length "<<n<<"\n";
        int a;
        cin>>a;
        if(a==-9999)
            continue;
        else
            break;
    }
    return 0;
}
