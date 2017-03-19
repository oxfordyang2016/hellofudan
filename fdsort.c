#include <stdio.h>
#define OFFSET 500000
int Hash[1000001];
int main(){
//printf("int hash [100001] ,Hash[11] is  %d \n  ",Hash[11]);
int n,m;
while(scanf("%d%d",&n,&m)!=EOF){
                                    printf("eof = %d\n",EOF);
                                   
                                    int i;
                                    for ( i=-500000;i<=500000;i++){
                                    Hash[i+OFFSET]=0;
                                                                   }



                                    printf("you have enter n= %d,m=%d \n",n,m);
                                    int i1 ;
                                    for (i1=1;i1<=n;i1++){
                                    int x;
                                    scanf("%d",&x);
                                    Hash[x+OFFSET]=1;
                                    printf("you have enter score = %d \n",x);



                                                         }
printf("the third stage \n");
int i2;
for(i2=500000;i2>=-500000;i2--){
//printf("you have enter loop \n");
if( Hash[i2+OFFSET]==1){
printf("%d",i2);
m--;
//printf("i have arrive the stage of printing sort value");
if(m!=0){ printf(" ");}

else{
printf("\n");
break;


}
}




}





}







return 0;

}





