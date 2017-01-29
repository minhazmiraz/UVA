#include<bits/stdc++.h>
using namespace std;
int arr[10],flag;
int permutArr[10];
vector<string> vc;
string str = "+-*";
char op[5];
int vis[10];
void oprPermut(int pos)
{
    if(pos>3)
    {
        op[pos]='\0';
        vc.push_back(op);
        return;
    }
    for(int i=0; i<3; i++)
    {
        op[pos]=str[i];
        oprPermut(pos+1);
    }
}

void process(int a[])
{
    for(int i=0;i<vc.size();i++)
    {
        int sum = a[0];
        for(int j=0;j<4;j++)
        {
            switch(vc[i][j])
            {
            case '+':
                sum+=a[j+1];
                break;
            case '-':
                sum-=a[j+1];
                break;
            case '*':
                sum*=a[j+1];
                break;
            }
        }
        if(sum==23)
            flag=1;
        if(flag)
            break;
    }
}

void permutation(int pos)
{
    if(pos>4)
    {
        process(permutArr);
        return;
    }
    for(int i=0; !flag&&i<5; i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            permutArr[pos]=arr[i];
            permutation(pos+1);
            vis[i]=0;
        }
    }
}

int main()
{
    oprPermut(0);
    while(1)
    {
        for(int i=0;i<5;i++)
            cin>>arr[i];
        if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0&&arr[4]==0)
            break;
        memset(vis,0,sizeof(vis));
        flag=0;
        permutation(0);
        if(flag)
            cout<<"Possible\n";
        else
            cout<<"Impossible\n";
    }

    return 0;
}
