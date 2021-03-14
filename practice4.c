// [code] ex3-2.c
// C108118242 范燁庭
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,a,b,x,y;
  printf("輸入兩個字\n");
  scanf("%d %d",&x,&y);
  a=x;
  b=y;
  if(a>b){
for(i=b;i>=0;i--){
     if(a%i==0 && b%i==0 )
     {
         break;
     }
}
  }else{
    for(i=a;i>=0;i--){
     if(a%i==0 && b%i==0 )
     {
         break;
     }
}
  }
printf("最大公因數:%d\n",i);
system("pause");
return 0;
 }
