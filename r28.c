#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
    if(ch>='a'&&ch<='z')
    {
        printf("alphat");
    }
    else
    {
        printf("constant");
    }
    return 0;
}
