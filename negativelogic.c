#include <stdio.h>
int main(void){
    int leaf,height,uncert = 1;
    printf("height\n");
    scanf("%d",&height);
    printf("leaf\n");
    scanf("%d",&leaf);
    if((height <= 5) && (leaf >= 8)){
        printf("Tinuviel\n");
    }
    if((height >= 10) && (leaf >= 10)){
        printf("Calaele\n");
    }
    if((height >= 8) && (leaf <= 5)){
        printf("Falarion\n");
    }
    if((height >= 12) && (leaf <= 7)){
        printf("Dorthonion\n");
    }
    if (uncert){
        printf("Uncertain");
    }
    return 0;
}
