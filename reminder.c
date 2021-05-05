#include <stdio.h>
int main(void){
    int match,box,remain;
    printf("matches ");
    scanf("%d",&match);
    printf("boxes ");
    scanf("%d",&box);
    printf("%d\n",match/box);
    printf("%d",match%box);
    return 0;
}
