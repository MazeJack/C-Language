#include <stdio.h>
#include <math.h>
void star(int *,int *,double *);
int main()
{
    int sum , avg;
    double sd;
    star(&sum,&avg,&sd);
    printf("sum =%d\nAverage = %d\nStandard deviation = %lf\n",sum,avg,sd);
    return 0;
}
void star(int *sum, int *avg, double *sd)
{
    int n1,n2,n3,n4,n5;
    printf("Enter a Five Integer: ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
    *sd = sqrt((pow((n1-*avg),2.0)+pow((n2-*avg),2.0)+pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);
}