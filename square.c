#include <stdio.h>
int main(void)
{
    char star = '*';
    int nbstars;
    printf("nbstars\n");
    scanf("%d",&nbstars);
    int row = 0,column = 0;
    for (column=0;column < nbstars;column++)
    {
        for (row = 0;row < nbstars;row++)
        {
            printf("%c",star);
        }
        printf("\n");
    }
    return 0;
}
