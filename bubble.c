#include <stdio.h>

int inputnumber;


int main(){

//------get inputnumber-----

scanf("%d",&inputnumber);

//--------get inputarray-----

int i;
int inputarray[inputnumber];
for(i=0;i<inputnumber;i++){
scanf("%d",&inputarray[i]);

}

//-------------bubble sorrt------

int k,tmp;
for (k=0;k<inputnumber;k++){
/**
[1,2,3,4,5,6]
**/
//if a[k]<a[k+1]
int m,swap;
//-----single numbe modify----
for(m=inputnumber-1;m>k;m--){
if( inputarray[m]>inputarray[m-1]){
swap=inputarray[m];
inputarray[m]=inputarray[m-1];
inputarray[m-1]=swap;
}

}


}

int d;

for(d=0;d<inputnumber;d++){

printf("%d ",inputarray[d]);

}

return 0;
}
