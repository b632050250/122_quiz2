#include<stdio.h>
int main()
{
    int n,a=2,i,j,k=0,m=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=a; j<=1000; j++)
        {
            if(i==(j*j*j))
            {
                k++;
                if(i==n)
                {
                    m++;
                }
            }
        }
    }
    if(m==0)
    {
        printf("%d",n-k);
    }
    else
    {
        printf("Not Cube Free");
    }
    return 0;
}
