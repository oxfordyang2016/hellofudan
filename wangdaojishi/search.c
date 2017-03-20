#include <stdio.h>
int main(){

//--------get the number of input number-------

int inputnumber;

while(scanf("%d",&inputnumber)!=EOF){
printf("you have input number= %d \n",inputnumber);



//----------save inputnumber int  in inputarray----------
int i;
int inputarray[inputnumber];
for(i=0;i<inputnumber;i++ ){
scanf("%d",&inputarray[i]);
}
printf("your inputarray is %d \n",inputarray);
//----------get  lookupnumber--------
int lookupnumber;
scanf("%d",&lookupnumber);
printf("your lookupnumber is  %d ",lookupnumber);


//-------------get the index of lookupnumber-----

/**
[3,4,5,6,7,8,9]

iterate the array ,if array[i]==lookipnumber
print the i
**/
int judge=-1;
int i3;
for(i3=0;i3<inputnumber;i3++){
if (inputarray[i3]==lookupnumber){
judge=i3;
printf("your the index of of lookupnumber in inputarray is %d\n ",judge);
break;
}


}



printf("the index of of lookupnumber in inputarray is %d\n ",judge);



}


return 0;

}
