#include<iostream>
using namespace std;

int main()
{
    long long l,h,a,b,len,num,seq,counter;
    while(1)
    {
        cin>>l>>h;

        cout<<"Between "<<l<<" and "<<h<<", ";

        if(l==0&&h==0)
            break;
        if(l>h)
        {
            int temp=l;
            l=h;
            h=temp;
        }

        for(a=l,seq=0;a<=h;a++)
        {
            len=a;
            counter=0;
            while(1)
            {
                if(len%2==0)
                    len=len/2;
                else if(len==1&&counter>0)
                    break;
                else if(len%2!=0)
                    len=(3*len)+1;
                counter++;
            }

            if(counter>seq)
            {
                seq=counter;
                num=a;
            }
        }
        cout<<num<<" generates the longest sequence of "<<seq<<" values.\n";
    }
    return 0;
}
