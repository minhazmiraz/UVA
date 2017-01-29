#include<bits/stdc++.h>
using namespace std;
int colFlag[10],leftDiag[16],rightDiag[16];
int arr[10][10],maxx,cnt;
 
void eightQueen(int pos,int sum)
{
    if(pos==9)
    {
        maxx=max(maxx,sum);
        cnt++;
        //cout<<sum<<""<<cnt<<endl;
 
        return;
    }
    for(int i=1;i<=8;i++)
    {
        if(!colFlag[i]&&!leftDiag[8+(pos-i)]&&!rightDiag[i+pos])
        {
            colFlag[i]=1;
            leftDiag[8+(pos-i)]=1;
            rightDiag[i+pos]=1;
            sum+=arr[pos][i];
 
            eightQueen(pos+1,sum);
 
            sum-=arr[pos][i];
            leftDiag[8+(pos-i)]=0;
            rightDiag[i+pos]=0;
            colFlag[i]=0;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        memset(colFlag,0,sizeof(colFlag));
        memset(leftDiag,0,sizeof(leftDiag));
        memset(rightDiag,0,sizeof(rightDiag));
        memset(arr,0,sizeof(arr));
        for(int j=1;j<=8;j++)
            for(int k=1;k<=8;k++)
                scanf("%d",&arr[j][k]);
        maxx=0;
        cnt=0;
        eightQueen(1,0);
        cout.width(5);
        cout<<maxx<<endl;
    }
}
