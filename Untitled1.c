// hello_c.c (hello_c.cpp)
#include <stdio.h>
#include <stdlib.h>
int main(){

 printf("\n Welcome to  Programming !!\n\n");

 int ar[]={11,44,33,22};
 int count=0;
 int i , j ,k,u;
 for(i=0;i<(sizeof(ar)/sizeof(ar[0]));i++)
 {
 for( j =0;j<(sizeof(ar)/sizeof(ar[0]))-1;j++)
 {
      if(ar[i]>ar[(i+1)])
      {
        count=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=count;
      }
 }

 printf("%d\n",ar[i]);}

 printf("\n *** <<數字跑馬燈程式>> *** \n\n");
 for(i=0;i<=100;i++)
 {
     printf("\r");
     printf("%2d", 100-i);
    printf("\t");
     u=1;
     while(1)
     {
        if(u>100000000) break;
        u++;
     }
 }


 printf("\n\n ****** 程式完成! \n\n");

 system("pause");
 return 0;
}
