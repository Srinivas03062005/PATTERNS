#include<stdio.h>
int main()
{
    int n,rows,cols,spaces;
    printf("Enter a number");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            printf(" ");
        }
        for(cols=1;cols<=2*rows-1;cols++)
        {
            if(cols==1||cols==2*rows-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    for(rows=1;rows<n;rows++)
    {
        for(spaces=1;spaces<=rows;spaces++)
        {
            printf(" ");
        }
        for(cols=1;cols<=2*(n-rows-1)+1;cols++)
        {
            if(cols==1||cols==2*(n-rows-1)+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}

