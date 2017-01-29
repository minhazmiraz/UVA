#include<stdio.h>
#include<string.h>
int main()
{
    char ch,temp;
    while(scanf("%c",&ch)==1)
    {
        if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
        {
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                while(isalpha(ch))
                {
                    printf("%c",ch);
                    scanf("%c",&ch);
                }
                printf("ay");
                printf("%c",ch);
            }
            else
            {
                temp=ch;
                scanf("%c",&ch);
                while(isalpha(ch))
                {
                    printf("%c",ch);
                    scanf("%c",&ch);
                }
                printf("%c",temp);
                printf("ay");
                printf("%c",ch);
            }
        }
        else
            printf("%c",ch);
    }
    return 0;
}
