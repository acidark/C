#include <stdio.h>
int main(void){
   int fdice,sdice,sum;
   printf("first dice\n");
   scanf("%d",&fdice);
   printf("second dice\n");
   scanf("%d",&sdice);
   sum = ((fdice+sdice) >= 10);
   if(sum){
       printf("Special tax\n");
       printf("36\n");
   }else{
       printf("Regular tax\n");
       printf("%d\n",(fdice+sdice)*2);
   }
   return 0;
}
