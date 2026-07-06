#include <stdio.h>
#include <string.h>


int main()
{
    char c[100];
    scanf("%s",c);
    int a = 0;
    scanf("%d",&a);
    if (a<0 || a >= strlen(c))
    {
        printf("invalid index\n");
    }
    else
    {
        memmove(c + a, c + a + 1, strlen(c + a + 1) + 1);
        printf("%s",c);
    }
   
}