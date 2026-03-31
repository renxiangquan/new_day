#include<stdio.h>


void print(unsigned int a)
{
    if(a>=10)
    {
        print(a/10);
    }
    printf("%u\n",a%10);
}

int main()
{
    unsigned int a =0;
    print(1234);
    return 0;
}