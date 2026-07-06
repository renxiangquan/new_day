#include <stdio.h>
#include <string.h>

int main()
{
    int a[5]={0};
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[5]={0};
    memcpy(b,a,sizeof(a));
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    a[0] = 999;
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}