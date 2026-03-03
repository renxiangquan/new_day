#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[20];

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print the copied string
    printf("Copied string: %s\n", str2);

    return 0;
}