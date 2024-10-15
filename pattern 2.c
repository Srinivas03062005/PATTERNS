1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5


#include<stdio.h>
int main()
{
    int n,rows,cols;
    printf("Enter a number");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
            for(cols=1;cols<=n;cols++)
            {
                printf("%d ",rows);
            }
            printf("\n");
    }
    return 0;
}

