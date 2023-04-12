//wap to sum 1 to n numbers;
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("please enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d+",i);
        sum=sum+i;
    }
    printf("\n sum=%d",sum);
    return 0;
}
