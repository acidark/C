#include <stdio.h>
int main(void){
    int array[10];
    int readvalue;
    int i=0;
    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&readvalue);
    printf("%d\n",array[readvalue]);
    return 0;
}
