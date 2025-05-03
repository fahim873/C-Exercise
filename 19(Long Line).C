#include<stdio.h>
int main()
{
    char st[100];
    printf("Enter your university name: ");
    scanf("%[^\n]",&st);
    printf("%s",st);
    return 0;
}
