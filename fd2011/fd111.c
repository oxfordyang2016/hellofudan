#include<stdio.h>
#include<string.h>
int main()
{
//-----------get string input------------
char s1[100],s2[100],temp[100],temp2[100];
int i,j;
scanf("%s%s",s1,s2);
printf(s1);//it will print a string



//-------------string switch-------------
if(strlen(s2)>strlen(s1))
{
strcpy(temp,s1);
strcpy(s1,s2);
strcpy(s2,temp);
}

//------------
temp[0]=0;//方便后续操作
for(i=0;i<strlen(s2);i++)
for(j=strlen(s2);j>i;j--)
{
memset(temp2,0,sizeof(temp2));//增加了这一句
strncpy(temp2,s2+i,j-i);
if(strstr(s1,temp2))
{
if(strlen(temp2)>strlen(temp))
strcpy(temp,temp2);
}
}
printf("%s\n",temp);
return 0;
}
