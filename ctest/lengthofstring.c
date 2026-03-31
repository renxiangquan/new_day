#include<stdio.h>

int my_strlen(char* str)
{
    
    
    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        
        return   (my_strlen(str+1)+1);
    }
    
}


int main()
{
    int a = my_strlen("abcdef");
    printf("%d",a);
}