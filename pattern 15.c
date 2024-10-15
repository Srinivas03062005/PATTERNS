#include<stdio.h>
int main()
{
    int n,rows,cols,spaces,count=5;
    printf("Enter a number ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            printf("  ");
        }
        count=5;
        for(cols=1;cols<=rows;cols++)
        {
            printf("%d ",count--);
        }
        printf("\n");
    }
    return 0;
}


