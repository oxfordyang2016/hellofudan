#include<stdio.h>
#include<stack>
using namespace std;
stack<int> s;
char str[110];
char ans[110];
int main(){
while(scanf("%s",str)!=EOF){
int i;
for (i=0;str[i]!=0;i++){
if(str[i]=='('){s.push(i);ans[i]=' ';}
else if(str[i]==')'){
       if (s.empty()==false)
        {s.pop(); ans[i]=' ';}
       else ans[i]='?';

}
else ans[i]=' ';

}
while(!s.empty()){
ans[s.top()]='$';
s.pop();


}

ans[i]=0;
printf("%s\n",str);
printf("%s\n",ans);




}






return 0;
}







