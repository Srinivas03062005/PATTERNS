#include<stdio.h>
int main()
{
    int n,rows,cols,spaces,printvalue;
    printf("Enter a number");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            printf("  ");
        }
        for(cols=1;cols<=2*rows-1;cols++)
        {
            printvalue=(cols<=rows)?rows-cols+1:cols-rows+1;
            printf("%d ",printvalue);
        }
        printf("\n");
    }
    return 0;
}


