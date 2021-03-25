#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m=0,p,q=1;
    char a='0';
    char n[1000],b[1000],c[1000];
    scanf("%s",n);
    k=strlen(n);
    for(i=k-1; i>0; i--)
    {
        p+=n[i]*q;
        q=q*10;
    }
    for(j=q; j>0; j--)
    {
        for(i=0; i<k; i++)
        {
            b[k-1]=n[i];
            k--;
        }
    for(i=0; i<k; i++)
    {
        if(b[i]==n[i])
        {
            m++;
        }
    }
    }
    printf("%d",m);
    return 0;
}
