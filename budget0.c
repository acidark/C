#include <stdio.h>
int main(void)
{
    int sum=0,expens=0;
    printf("expends\n");
    scanf("%d",&expens);
    while(expens != -1)
    {
        sum=expens+sum;
        printf("expens\n");
        scanf("%d",&expens);
    }
    printf("%d\n",sum);
    return 0;
}
