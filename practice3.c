// [code] ex3-1.c
// C108118242 ≠SÍMÆx
#include <stdio.h>
#include <stdlib.h>
int main(){
int i , j;
for(i=0;i<=9;i++)
 {
     for(j=0;j<=9;j++)
     {
        printf("%c",(65+(j+i)%10));
     }
     printf("\n");
 }
     system("pause");
     return 0;
}
