#include<stdio.h>
int main()
{
    int n,rows,cols,colslimit;
    printf("Enter a number ");
    scanf("%d",&n);
    for(rows=1;rows<=n*2-1;rows++)
    {
        colslimit=(rows<=n)?rows:n*2-rows;
        for(cols=1;cols<=colslimit;cols++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}





