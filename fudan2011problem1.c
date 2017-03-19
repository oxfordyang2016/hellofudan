#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100], c[100];
    printf("input 3 string :\n");
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);

    printf("you inout c is %s",c);
    char* p = strcmp(a, b) >= 0 ? a : b;
    printf("greater string :%s\n", strcmp(p, c) >= 0 ? p : c);
    return 0;
}
