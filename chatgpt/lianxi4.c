#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }
}