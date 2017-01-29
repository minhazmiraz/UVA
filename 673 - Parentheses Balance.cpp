#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    string ch;
    cin>>n;
    getline(cin,ch);
    while(n--)
    {
        stack <char> stk;
        getline(cin,ch);
        for(int i=0;i<ch.size();i++)
        {
            if(!stk.empty()&&ch[i]==')'&&stk.top()=='(')
                stk.pop();
            else if(!stk.empty()&&ch[i]==']'&&stk.top()=='[')
                stk.pop();
            else
                stk.push(ch[i]);
        }

        if(stk.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
