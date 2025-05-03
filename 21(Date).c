#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter any date (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day = %d\n",d);
    printf("Month = %d\n",m);
    printf("Year = %d\n",y);
    return 0;
}
