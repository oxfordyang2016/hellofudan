#include <stdio.h>
int main(){
//--------print format------
printf("hello world ,hello fudan ,%d,%s \n",668,"yangmingishere");








//---------get input------use hash----
int n;
while(scanf("%d",&n)!=EOF&&n!=0){
int Hash[101]={0};//initiate donot influence the subsequnce change//it initiate all element to 0
int i;
for(i=1;i<=n;i++){
int x;
scanf("%d",&x);
Hash[x]++;
}
int x;
scanf("%d",&x);
printf("%d\n",Hash[x]);

char Hash1[100]={'y'};
int Hash2[66]={6};
printf("in Hash1[100]={'y'},Hash1[0] is %c , Hash1[78]is %s ,in Hash2[66]={6},Hash2[34]=%d,Hash2[0]=%d\n",Hash1[0],Hash1[78],Hash2[34],Hash2[0]);


}






return 0;


}





