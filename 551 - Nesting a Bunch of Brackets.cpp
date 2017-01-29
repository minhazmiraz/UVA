#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int n,i;
    string ch;
    while(getline(cin,ch))
    {
        stack <char> stk;
        for(i=0,n=0;i<ch.size();i++)
        {
            if(ch[i]==')')
            {
                n++;
                if(!stk.empty()&&stk.top()=='(')
                    stk.pop();
                else
                {
                    stk.push(ch[i]);
                    break;
                }
            }
            else if(ch[i]==']')
            {
                n++;
                if(!stk.empty()&&stk.top()=='[')
                    stk.pop();
                else
                {
                    stk.push(ch[i]);
                    break;
                }
            }
            else if(ch[i]=='}')
            {
                n++;
                if(!stk.empty()&&stk.top()=='{')
                    stk.pop();
                else
                {
                    stk.push(ch[i]);
                    break;
                }
            }
            else if(ch[i]=='>')
            {
                n++;
                if(!stk.empty()&&stk.top()=='<')
                    stk.pop();
                else
                {
                    stk.push(ch[i]);
                    break;
                }
            }
            else if(ch[i]=='*'&&ch[i+1]==')')
            {
                n++;
                if(!stk.empty()&&stk.top()=='*')
                {
                    stk.pop();
                    stk.pop();
                    i++;
                }
                else
                {
                    stk.push(ch[i]);
                    stk.push(ch[i+1]);
                    break;
                }
            }
            else if(ch[i]=='('&&ch[i+1]=='*')
            {
                n++;
                stk.push(ch[i]);
                stk.push(ch[i+1]);
                i++;
            }
            else if(ch[i]=='('||ch[i]=='['||ch[i]=='<'||ch[i]=='{')
            {
                stk.push(ch[i]);
                n++;
            }
            else
                n++;
        }

        if(i==ch.size())
            n++;

        if(stk.empty())
            cout<<"YES"<<"\n";
        else
            cout<<"NO "<<n<<"\n";
    }
    return 0;
}
