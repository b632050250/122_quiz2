#include<stdio.h>
int main()
{
    int n,a=2,i,j=0,k=0;
    scanf("%d",&n);
    for(i=a; i<=1000; i++)
    {
        if(n==(a*a*a))
        {
            j++;
            break;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(i==(a*a*a))
        {
            k++;
        }
    }
    if(j==0)
    {
        printf("%d",n-k);
    }
    else
    {
        printf("Not Cube Free");
    }
    return 0;
}
