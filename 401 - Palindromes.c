#include<stdio.h>
#include<string.h>

int mPalindrom(char x,char y)
{
    if(x=='E')
        x='3';
    else if(x=='3')
        x='E';
    else if(x=='J')
        x='L';
    else if(x=='L')
        x='J';
    else if(x=='S')
        x='2';
    else if(x=='2')
        x='S';
    else if(x=='Z')
        x='5';
    else if(x=='5')
        x='Z';
    else if(x=='0'&&y=='O')
        x='O';
    else if(x=='O'&&y=='0')
        x='0';
    else if(x!='A'&&x!='H'&&x!='I'&&x!='M'&&x!='O'&&x!='T'&&x!='U'&&x!='V'&&x!='W'&&x!='X'&&x!='Y'&&x!='1'&&x!='8')
        return 1;

    if(x!=y)
        return 1;
    else
        return 0;
}

int main()
{
    int i,n,pcount,mpcount;
    char str[1000];
    while(scanf(" %s",str)==1)
    {
        pcount=1;
        mpcount=1;
        n=strlen(str);
        if(n==1)
        {
            if(str[0]!=str[0])
                pcount=0;
            if(mPalindrom(str[0],str[0]))
                mpcount=0;
        }
        else
            for(i=1;i<=n/2;i++)
            {
                if(str[i-1]!=str[n-i])
                    pcount=0;
                if(mPalindrom(str[i-1],str[n-i]))
                    mpcount=0;
            }
            if(n%2!=0)
                if(mPalindrom(str[n/2],str[n/2]))
                    mpcount=0;
        if(pcount==0&&mpcount==0)
            printf("%s -- is not a palindrome.\n",str);
        else if(pcount==1&&mpcount==0)
            printf("%s -- is a regular palindrome.\n",str);
        else if(pcount==0&&mpcount==1)
            printf("%s -- is a mirrored string.\n",str);
        else if(pcount==1&&mpcount==1)
            printf("%s -- is a mirrored palindrome.\n",str);
        printf("\n");
    }
    return 0;
}
