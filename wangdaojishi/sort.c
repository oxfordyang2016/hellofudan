#include <stdio.h>
#include <algorithm>
#include<fstream>
#include <iostream>
using namespace std;
bool cmp(double x,double y){ return x>y;}




int main(){
int n;
int buf[10000];
while( scanf("%d",&n)!=EOF){
for(int  i=0;i<n;i++){
scanf("%d",&buf[i]);


}

sort(buf,buf+n,cmp);
for(int i=0;i<n;i++){

printf(" %d ",buf[i]);

}

printf("\n");

}



return 0;



}



