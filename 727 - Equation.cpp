#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    int n,j;
    char c,ch[60];
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        if(i!=1)
            cout<<"\n\n";
        j=0;
        stack <char> stk;
        cin.ignore();
        while(1)
        {
            c=cin.get();
            if(c!='\n')
                cin.ignore();
            if(c=='\n')
            {
                while(!stk.empty())
                {
                    ch[j]=stk.top();
                    stk.pop();
                    j++;
                }
                break;
            }
            else if(c=='(')
                    stk.push(c);
            else if(c=='+'||c=='-'||c=='*'||c=='/')
            {
                if(c=='+')
                {
                    while(!stk.empty()&&stk.top()!='(')
                    {
                        ch[j]=stk.top();
                        stk.pop();
                        j++;
                    }
                    stk.push(c);
                }
                else if(c=='-')
                {
                    while(!stk.empty()&&stk.top()!='(')
                    {
                        ch[j]=stk.top();
                        stk.pop();
                        j++;
                    }
                    stk.push(c);
                }
                else if(c=='*')
                {
                    while(!stk.empty()&&stk.top()!='+'&&stk.top()!='-'&&stk.top()!='(')
                    {
                        ch[j]=stk.top();
                        stk.pop();
                        j++;
                    }
                    stk.push(c);
                }
                else if(c=='/')
                {
                    while(!stk.empty()&&stk.top()!='+'&&stk.top()!='-'&&stk.top()!='(')
                    {
                        ch[j]=stk.top();
                        stk.pop();
                        j++;
                    }
                    stk.push(c);
                }
            }
            else if(!stk.empty()&&c==')')
            {
                while(stk.top()!='(')
                {
                    ch[j]=stk.top();
                    stk.pop();
                    j++;
                }
                stk.pop();
            }
            else
            {
                ch[j]=c;
                j++;
            }
        }

        for(int m=0;m<j;m++)
            cout<<ch[m];
    }
    return 0;
}
