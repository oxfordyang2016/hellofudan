#include <stdio.h>
int main(){

//---get the height  of graph ------
int h;
scanf("%d",&h);
//printf("you have input h=%d \n",h);


//----compute the bottom line total number * ----------
int the_bottom_number=h+(h-1)*2 ;
//printf("the bottom line * is %d\n ",the_bottom_number);


//------get the number of * in everyline(line number)-----set k is line number------
int k;
int linenumber;


//------get every line space number 
int linespace;





//---------prepare to print space and start
for(k=1;k<=h;k++){//everyline
linenumber=h+(k-1)*2;
linespace=the_bottom_number-linenumber;
//printf("now is the %dnd line ,the now line space =%d , now line * number is %d \n",k,linespace,linenumber);
//print every space /start--set everyline-----
int everyline;
for(everyline=0;everyline<the_bottom_number;everyline++){
//print space
//printf("i have enter the second  loop");
if (everyline<linespace){printf(" ");}
else{printf("*");}
//printf("are you kidding me?");

}
printf("\n");







}
//printf("*\n");
//printf("linenumber%d",linenumber);
return 0;




}






