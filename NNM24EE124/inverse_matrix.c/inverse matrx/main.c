//author:thrisha
//usn:nnm24ee124
//date:08_june_2026
//NMAM intstitute of technology
//ref:GeeksforGeeks
//purpose:for a given matrix this code is used to find its inverse
#include <stdio.h>//include the matrix
#include<stdlib.h>//include the matrix
#include<math.h>//include the matrix
int main(){
    int n,i,j,m,k;// initiallize variable
    printf("enter the positive non zero value of n \n");
    scanf("%d",&n);//save the value of n
    printf("the value of n=%d\n",n);
    printf("enter the positive non zero value of m \n");
    scanf("%d",&m);//save the value of n
    printf("the value of m=%d\n",m);
    if(n!=m)
    {
       printf("inverse of matrix is not possible") ;
    }
    else{
    printf("enter the %d element of matrix\n",n*n);
    float array[n][n];// initiallize array
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        scanf("%f",&array[i][j]);//save the value entered in the matrix in this array
    }}
    float result[n][n];
if(result[i][i]==0)
{
    printf("Inverse does not exist.\n");
    return 0;
}
     else{
    printf("matrix=\n");// the matrix entered is
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        printf("%f\t",array[i][j]);//print the matrix
    }
    printf("\n");
    }
    float array1[n][n];//intialize identity matrix
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
       if(i==j){
        array1[i][j]=1;//diagonal matrix
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
   float result[n][2*n];//intialize merge 2 matrix
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
       result[i][j]=array[i][j];//save the vaalue of first array in the first nXn matrix
    }}
     for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
       result[i][n+j]=array1[i][j];
    }}
      printf("merge matrix=\n");// merge 2 matrix
    for(i=0;i<n;i++)
    {
      for(j=0;j<2*n;j++){
        printf("%f\t",result[i][j]);
    }
    printf("\n");
    }
     for(i=0;i<n;i++)
    {
      for(j=0;j<2*n;j++){
            if(i==j){
        float pivot = result[i][i];

           for(j=0; j<2*n; j++)
{
    result[i][j] = result[i][j] / pivot;
}
          result[i][j]=result[i][j]/result[i][j];
      }
  for(i=0;i<n;i++)
{
    float pivot = result[i][i];

    for(j=0;j<2*n;j++)
        result[i][j] /= pivot;

    for(k=0;k<n;k++)
    {
        if(k!=i)
        {
            float factor = result[k][i];

            for(j=0;j<2*n;j++)
                   {
                result[k][j] -= factor*result[i][j];
            }
        }
    }
}
printf("matrix=\n");
for(i=0;i<n;i++)
{
    for(j=n;j<2*n;j++)
    {
        printf("%f\t",result[i][j]);
    }
}}}}}
    return 0;
}
