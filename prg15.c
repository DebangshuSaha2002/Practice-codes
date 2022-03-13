#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char temp;
    int i,j,len;
    printf("Enter a string ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("After sorting the character in ascending is : %s",str);
    return 0;
}