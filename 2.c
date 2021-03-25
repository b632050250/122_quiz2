#include<stdio.h>
int main()
{
    int m,n,i,j,p,q,r;
    scanf("%d",&m);
    scanf("%d",&n);
    char b[n][70];
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&p,&q,&r);
        for(j=q; j<(r+q); j++)
        {
            b[p-1][j-1]='x';
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<70; j++)
        {
            if(b[i][j]!='x')
            {
                b[i][j]='o';
            }
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<70; j++)
        {
            printf("%c",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
