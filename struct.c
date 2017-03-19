#include<stdio.h>
#define boolspecialyear(x) x%4==0&x%100!=0||x%400==0?1:0
#define testmacro(x) x*x


int main(){
int a=boolspecialyear(2004);
printf("%d",a); 
printf("%d",testmacro(3));
int b[3]={1,2,3};
printf("i test macro it cannot be printed %d",b[boolspecialyear(2004)]);


return 0;
}
