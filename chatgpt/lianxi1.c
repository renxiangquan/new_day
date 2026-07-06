#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*isdigit(c)   // 判断是不是数字字符
isalpha(c)   // 判断是不是字母
islower(c)   // 判断是不是小写字母
isupper(c)   // 判断是不是大写字母
tolower(c)   // 转成小写
toupper(c)   // 转成大写
题 1：统计字符类型

定义字符串：

char s[] = "Abc 123 XyZ!";

统计并打印：

数字字符个数
字母字符个数
大写字母个数
小写字母个数
空格个数
其他字符个数*/
void tongji(char c[]);
int main()
{
    char s[100] ;
    fgets(s, sizeof(s), stdin);
    tongji(s);
}

void tongji(char c[])
{
    int numofdigit = 0;
    int numofalpha = 0;
    int numofupper = 0;
    int numoflower = 0;
    int numofkongge = 0;
    int numofelse = 0;
    int i = 0;
    while(c[i]!='\0')
    {
        if(isdigit(c[i]))
        {
            numofdigit++;
        }
        else if(isalpha(c[i]))
        {
            numofalpha++;
            if(isupper(c[i]))
            {
                numofupper++;
            }
            else
            {
                numoflower++;
            }
        }
        else if(c[i] == ' ')
        {
            numofkongge++;
        }
        else if(c[i] !='\n')
        {
            numofelse++;
        }
        i++;
    }
    printf("digit = %d\n",numofdigit);
    printf("alpha = %d\n",numofalpha);
    printf("upper = %d\n",numofupper);  
    printf("lower = %d\n",numoflower);
    printf("space = %d\n",numofkongge);
    printf("other = %d\n",numofelse);
}
