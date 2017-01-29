#include<bits/stdc++.h>
using namespace std;
int vis[10][10],v[10];
int arr[10][10]={{0,0,0,0,0,0},
                 {0,0,1,1,0,1},
                 {0,1,0,1,0,1},
                 {0,1,1,0,1,1},
                 {0,0,0,1,0,1},
                 {0,1,1,1,1,0}};

void santa(int pos,int start)
{
    if(pos==9)
    {
        for(int i=0;i<9;i++)
            cout<<v[i];
        cout<<"\n";
        return;
    }
    for(int i=1;i<=5;i++)
    {
        if(!vis[start][i]&&arr[start][i])
        {
            vis[start][i]=1;
            vis[i][start]=1;
            v[pos]=i;
            santa(pos+1,i);
            vis[start][i]=0;
            vis[i][start]=0;
        }
    }
}
int main()
{
    memset(vis,0,sizeof(vis));
    memset(v,0,sizeof(v));
    v[0]=1;
    santa(1,1);
    return 0;
}
