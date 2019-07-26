#include<stdio.h>
int main()
{
    int count=0,n,i;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
    count++;
    i++;
    }
    printf("%d",count);
    return 0;
}
