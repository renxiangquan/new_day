#include <stdio.h>
#include <string.h>
#include <ctype.h>

void changeuptolow(char c[]);

int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    changeuptolow(s);
}

void changeuptolow(char c[])
{
    int i = 0;
    while(c[i]!= '\0')
    {
        if(isupper(c[i]))
        {
            c[i]=tolower(c[i]);
        }
        printf("%c",c[i]);
        i++;
    }
}