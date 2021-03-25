#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m=0,p=0,q=0,r=0;
    char a='0';
    char n[1000],b[1000],c[1000];
    scanf("%s",n);
    for(i=n; i>a; i--)
    {
        m=0;
        k=strlen(i);
        printf("%d",k);
        /*for(j=k-1; j>0; j--)
        {
            b[m]=n[j];
            printf("%c %c",b[m],n[j]);
            m++;
        }
        for(j=0; j<k; j++)
        {
            if(n[j]==b[j])
            {
                p++;
            }
        }
        if(p==k)
        {
            r++;
        }
        p=0;*/
    }
    printf("%d",r);
    return 0;
}
