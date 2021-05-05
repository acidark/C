#include <stdio.h>
int main(void){
    int i=0;
    int nume;
    //printf("Type number:\n");
    scanf("%d",&nume);
    for (i=0;i<11;i++){
        printf("%dx%d = %d\n",i,nume,nume*i);
    }
    return 0;
}
