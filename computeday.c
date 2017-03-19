#include<stdio.h>
#include<string.h>
#define isyeap(x) x%100!=0&&x%4==0||x%400==0?1:0
int dayofmonth[13][2]=
           {
            0,0,
            31,31,
            28,29,
            31,31,
            30,30,
            31,31,
            30,30,
            31,31,
            31,31,
            30,30,
            31,31,
            30,30,
            31,31


            };

struct Date{
           int day;
           int month;
           int year;

            };

 void nextday(struct Date date){
                date.day++;
                if(date.day>dayofmonth[date.month][isyeap(date.year)]){
                       date.day=1;
                       date.month ++;
                       if (date.month>12){
                                  date. month=1;
                                   date.year++;

                                     }
                                                          }

                         }



int buf[5001][13][32];
int abs(int x){return x<0?-x:x;}




int main(){
struct Date tmp;
int cnt=0;
tmp.day=1;
tmp.month=1;
tmp.year=0;
printf("i have arrive there before while\n");

void nextday(struct Date tmp);

while(tmp.year!=5){
    buf[tmp.year][tmp.month][tmp.day] =cnt;
    nextday(tmp);
    cnt ++;                
                      }

int d1,m1,y1;
int d2,m2,y2;
printf("i have arrive there before input\n");
scanf("%4d%2d%2d",&y1,&m1,&d1);
    printf("y1=%d,m1=%d,d1=%d\n",y1,m1,d1);
    scanf("%4d%2d%2d",&y2,&m2,&d2);
    //printf("i have arrived there1");
    printf("%d\n",abs(buf[y2][m2][d1]-buf[y1][m1][d1])+1);                                    
    printf("what is this\n");                                      



return 0;
}





