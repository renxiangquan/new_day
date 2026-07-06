#include <stdio.h>
#include <string.h>
#include <ctype.h>

void add(char c[]);

int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    add(s);
}
void add(char c[])
{
    int i=0;
    int sum = 0;
    while(c[i]!='\0')
    {
        if(isdigit(c[i]))
        {
            sum += c[i]-'0';
        }
        i++;
    }
    printf("sum = %d",sum);
}