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
            if(rows%2==1)
            {
                printf("%d ",cols%2);
            }
            else
            {
                printf("%d ",!(cols%2));
            }
        }
        printf("\n");
    }
    return 0;
}
