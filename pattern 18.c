#include<stdio.h>
int main()
{
    int n,rows,cols,spaces,count=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=rows-1;spaces++)
        {
            printf("  ");
        }
        count=1;
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }
    return 0;
}


