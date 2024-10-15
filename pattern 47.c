#include<stdio.h>
int main()
{
    int n,rows,cols,spaces,colslimit;
    printf("Enter a number");
    scanf("%d",&n);
    colslimit=2*n;
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=colslimit;cols++)
        {
            if(cols>rows&&cols<colslimit-rows+1)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for(rows=1;rows<n;rows++)
    {
        for(cols=1;cols<=colslimit;cols++)
        {
            if(cols>n-rows&&cols<n+rows+1)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}




