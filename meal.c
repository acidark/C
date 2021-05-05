#include <stdio.h>
int main(void){
    int ingredients = 0;
    int i = 0;
    double total=0.0;
    printf("nb ingredients\n");
    scanf("%d",&ingredients);
    double ingr[ingredients];
    double howmuchingr[ingredients];
    for(i=0 ; i < ingredients;i++){
        printf("ingr per pound\n");
        scanf("%lf",&ingr[i]);
    }
    for(i=0 ; i < ingredients;i++){
        printf("how much ingr you need\n");
        scanf("%lf",&howmuchingr[i]);
    }
    for(i=0 ; i < ingredients;i++){
        total = total + (ingr[i]*howmuchingr[i]);
    }
    printf("%.6lf\n",total);
    return 0;
}
