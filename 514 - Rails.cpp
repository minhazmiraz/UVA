#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,arr[1010];

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        while(1)
        {

            cin>>arr[0];
            if(arr[0]==0)
                break;
            for(int i=1;i<n;i++)
                cin>>arr[i];
            stack <int> stk;
            for(int i=1,j=0;i<=n;i++)
            {
                stk.push(i);
                while(j<n)
                {
                    if(!stk.empty()&&arr[j]==stk.top())
                    {
                        stk.pop();
                        j++;
                    }
                    else
                        break;
                }
            }
            if(stk.empty())
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        cout<<"\n";
    }
    return 0;
}
