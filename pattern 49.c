 #include<stdio.h>
#define MIN(a,b) ((a<b)?a:b)             //MIN or min  but we use maximum in capitals for better clarification
int main()
{
    int n,rows,cols,rowslimit,colslimit,printvalue;
    printf("Enter a number");
    scanf("%d",&n);
    rowslimit=n*2-1;
    colslimit=rowslimit;
    for(rows=1;rows<=rowslimit;rows++)
    {
        for(cols=1;cols<=colslimit;cols++)
        {
           printvalue=MIN(MIN(rows,rowslimit-rows+1),MIN(cols,colslimit-cols+1));
           printf("%d ",n-printvalue+1);
        }
        printf("\n");
    }

    return 0;
}






