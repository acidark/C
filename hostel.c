#include <stdio.h>
int main(void){
    int hours,base = 10;
    printf("hours\n");
    scanf("%d",&hours);
    int total = (hours*5)+base;
    int cap = (total >= 53);
    if(cap){
        printf("53\n");
    } else {
        printf("%d\n",total);
    }
    return 0;
}
