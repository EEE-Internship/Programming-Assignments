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
    int n,i,j,k;// initiallize variable
    printf("enter the value of n \n");
    scanf("%d",&n);//save the value of n
    printf("the value of n=%d\n",n);
    printf("enter the %d element of matrix\n",n+n);
    float array[n][n];// initiallize array
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        scanf("%f",&array[i][j]);//save the value entered in the matrix in this array
    }}
    printf("matrix=\n");// the matrix entered is
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        printf("%f\t",array[i][j]);//print the matrix
    }
    printf("\n");
    }
    int array1[n][n];//intialize identity matrix
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
      for (i = 0; i < n; i++) {
        // the diagonal element of the merged matrix
        if (fabs(result[i][i]) < 0.000001) {
            printf("\nError: Mathematical error! Diagonal element is zero.\n");
            return 1;
        }

        float ratio;
        for (j = 0; j < n; j++) {
            if (i != j) {
                // Calculate ratio using the merged matrix
                ratio = result[j][i] / result[i][i];
                 for (k = 0; k < 2 * n; k++) {
                    result[j][k] = result[j][k] - ratio * result[i][k];
                }
            }
        }
    }

    // Row Scaling (Dividing by diagonal elements to make the left side an identity matrix)
    for (i = 0; i < n; i++) {
        float diagonal_element = result[i][i];
        for (j = 0; j < 2 * n; j++) {
            result[i][j] = result[i][j] / diagonal_element;
        }
    }
      // Print the Final Inverse Matrix (Extracting it from the right half of the merge matrix)
    printf("\nThe Inverse Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%f ", result[i][n + j]);
        }
        printf("\n");
    }
    return 0;
}

