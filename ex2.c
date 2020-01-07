#include<stdio.h>
#include<string.h>

int main()
{
    char input[100];
    gets(input);
    for(int i=strlen(input) - 1; i >= 0; i--)  putchar(input[i]);
    return 0;
}
