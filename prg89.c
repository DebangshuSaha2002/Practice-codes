#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int count;
    char str[10]={'0','1','2','3','4','5','6','7','8','9'};
    printf("Enter a string having both letters as well as numbers\n");
    scanf("%s",s);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<strlen(s);j++)
        {
            if(str[i]==s[j])
            {
                count=count+1;
            }
        }
        printf("%d ",count);
        count=0;
    }
    return 0;
}