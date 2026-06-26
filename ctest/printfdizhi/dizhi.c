#include<stdio.h>




int main()
{
    int x = 10;
    int *p;
    p = &x;
    printf("%p\n",p);
    printf("%p\n",(void *)p);
    printf("%p\n",&p);
    return 0;
}