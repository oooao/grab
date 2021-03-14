// [code] ex3-1.c
// C108118242 范燁庭
#include <stdio.h>
#include <stdlib.h>
int main(){
int s=0,i,y,x,ma;
printf("請輸入兩個數字:");
scanf("%d %d",&y,&x);
printf("請輸入上限數字:");
scanf("%d",&ma);
 for (i=1;i<ma;i++){
 if (i%y==0 || i%x==0) continue;
 s++;
 if (s%20 == 0) printf("\n");
printf(" %d", i);
}

 printf("\n\n 1 至 %d 之間,不是 %d 和 %d 的倍數共有 %d 個\n\n",ma,y,x,s);
 system("pause");
return 0;
}
