#include<iostream>
#include<string>
using namespace std;


int main()
{
    int i,j,counter,m,n,query,temp,caseN;
    caseN=1;
    string str;
    char ch;
    while(cin>>str)
    {
        cout<<"Case "<<caseN<<":\n";
        cin>>query;
        for(i=0;i<query;i++)
        {
            cin>>m>>n;
            if(m>n)
            {
                temp=m;
                m=n;
                n=temp;
            }
            counter=1;
            for(j=m;j<=n;j++)
            {
                if(str[j]!=str[m])
                {
                    counter=0; break;
                }
            }
            if(counter)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        caseN++;
        str[0]='\0';
    }
    return 0;
}
