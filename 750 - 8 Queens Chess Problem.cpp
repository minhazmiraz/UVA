#include<bits/stdc++.h>
using namespace std;
int colflag[10],lowdiag[20],uppdiag[20],arr[10],cnt;
void eightQueen(int pos,int flag)
{
    if(pos==9)
    {
        cnt++;
        cout<<" "<<cnt<<"      "<<arr[1];
        for(int i=2;i<=8;i++)
            printf(" %d",arr[i]);
        cout<<"\n";
        return;
    }
    else if(pos==flag)
    {
        eightQueen(pos+1,flag);
        return;
    }
    for(int i=1;i<=8;i++)
    {
        if(!colflag[i]&&!lowdiag[8+(pos-i)]&&!uppdiag[pos+i])
        {
            colflag[i]=1;
            lowdiag[8+(i-pos)]=1;
            uppdiag[pos+i]=1;
            arr[pos]=i;

            eightQueen(pos+1,flag);

            colflag[i]=0;
            lowdiag[8+(pos-i)]=0;
            uppdiag[pos+i]=0;

        }
    }
}

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=1;i<=tcase;i++)
    {
        int a,b;
        cin>>a>>b;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        memset(colflag,0,sizeof(colflag));
        memset(lowdiag,0,sizeof(lowdiag));
        memset(uppdiag,0,sizeof(uppdiag));
        memset(arr,0,sizeof(arr));
        colflag[b]=1;
        lowdiag[8+(a-b)]=1;
        uppdiag[a+b]=1;
        cnt=0;
        arr[b]=a;
        eightQueen(1,b);
        cout<<"\n";
    }
    return 0;
}
