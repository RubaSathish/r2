#include<stdio.h>
int main()
{
    int N,A,D,temp,sum=0,i;
    scanf("%d%d%d",&N,&A,&D);
    temp=A;
    for(i=0;i<N;i++)
    {
        sum=sum+temp;
        temp=temp+D;
    }
    printf("%d",sum);
    return 0;
    
}
