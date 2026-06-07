#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,i,j,k;// initiallize variable
    printf("enter the value of n \n");
    scanf("%d",&n);//save the value of n
    printf("the value of n=%d\n",n);
    printf("enter the %d element of matrix\n",n+n);
    int array[n][n];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        scanf("%d",&array[i][j]);
    }}
    printf("matrix=\n");// the matrix entered is
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        printf("%d\t",array[i][j]);
    }
    printf("\n");
    }
    int array1[n][n];// identity matrix
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
       if(i==j){
        array1[i][j]=1;//diaganal matrix
       }
       else{
        array1[i][j]=0;
       }
    }}
     printf("identity matrix=\n");// this is the identity matrix
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        printf("%d\t",array1[i][j]);
    }
    printf("\n");
    }
   int result[n][2*n];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
       result[i][j]=array[i][j];
    }}
     for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
       result[i][n+j]=array1[i][j];
    }}
      printf("merge matrix=\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<2*n;j++){
        printf("%d\t",result[i][j]);
    }
    printf("\n");
    }
    return 0;
}
