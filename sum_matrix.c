#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("enter the elements of frist matrix=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("enter the elements of second matrix=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++){for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];}
        for(i=0;i<m;i++){for(j=0;j<n;j++)
printf("%d ",c[i][j]);printf("\n");
        }return 0;}