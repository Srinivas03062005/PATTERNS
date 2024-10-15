#include<stdio.h>
int main()
{
    int n,rows,cols,spaces;
    printf("Enter a number ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            printf(" ");
        }
        for(cols=1;cols<=rows;cols++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


