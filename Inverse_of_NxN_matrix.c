/******************************************************************************
//Sushanth Shetty 
//NNM24EE121
// 08/06/2026
 //Electrical and Electronics Engineering
 // College: NMAMIT*/
#include <stdio.h>

int main() 
{
    float det=1, a[100][100], b[100][100]; // Added b to backup original values of a
    int n,i,j,s,cof[100][100],adj[100][100];
    float inv[100][100]; // Added for inverse
    printf("Enter the order of matrix nXn");
    scanf("%d",&n);
    printf("therefore the order of matrix is %d X %d",n,n );
    s=n*n;
    printf("\n");
    printf("enter the %d value ",s);
    for (i=0;i<n;i++){
    for(j=0;j<n;j++){
    scanf("%f",&a[i][j]);
    b[i][j] = a[i][j]; // Keeping a backup of the original matrix before it's modified
    }
    }
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %.2f ",a[i][j]);
        }
        printf("\n");
    }
    for(int k=0;k<n;k++){
        for(int i=k+1;i<n;i++){
            float f = a[i][k] / a[k][k];
            for(int j=0;j<n;j++)
            a[i][j]=a[i][j]-f*a[k][j];
        }
    }
    for(int i=0;i<n;i++)
    det=det*a[i][i];
    printf("Determinant =%.2f",det);
    
    // --- CONTINUING FROM YOUR LOOP ---
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            // 1. Calculate the sign: (-1)^(i+j)
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            
            // 2. Extract the 2x2 minor matrix from the backup array 'b'
            float sub[2][2];
            int r = 0, c = 0;
            for(int row = 0; row < n; row++) {
                if (row == i) continue;
                c = 0;
                for(int col = 0; col < n; col++) {
                    if (col == j) continue;
                    sub[r][c] = b[row][col];
                    c++;
                }
                r++;
            }
            
            // 3. Calculate 2x2 determinant for the minor
            float minor_det = (sub[0][0] * sub[1][1]) - (sub[0][1] * sub[1][2-1]); 
            
            // 4. Assign to cofactor matrix
            cof[i][j]=sign*minor_det;
        }
    }
    
    // Adjoint is the TRANSPOSE of the cofactor matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            adj[i][j]=cof[j][i]; // Swapped j and i to handle the transpose mapping
        }
    }
    printf("\n adjoint matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",adj[i][j]);
        }
        printf("\n");
    }
    
    // --- CALCULATING INVERSE MATRIX (adjA / |A|) ---
    if (det == 0) {
        printf("\nInverse does not exist as determinant is 0.\n");
    } else {
        printf("\n Inverse matrix :\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                inv[i][j] = (float)adj[i][j] / det;
                printf("%8.2f", inv[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
