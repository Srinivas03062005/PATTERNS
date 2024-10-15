#include<stdio.h>
int main()
{
    int n,rows,cols,spaces;
    char a=65;
    printf("Enter a number ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=rows-1;spaces++)
        {
            printf(" ");
        }
        a=65;
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("%c ",a++);
        }
        printf("\n");
    }
    return 0;
}





