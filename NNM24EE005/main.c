/*AUTHOR=Adhya D A
USN=NNM24EE005
Date=08 JUNE 2026
Department=Electrical and Electronics
College=NMAM Institute of Technology
To find inverse of a matrix*/
#include <stdio.h>          
void inverseMatrix(float a[10][20], int n)  
{
    int i, j, k;           
    float ratio;         
    for(i = 0; i < n; i++)  {
        for(j = n; j < 2 * n; j++)     
        {
            if(i == j - n)              
                a[i][j] = 1;            
            else
                a[i][j] = 0;           
        }
    }
    for(i = 0; i < n; i++)              
    {
        for(j = 0; j < n; j++)          
        {
            if(i != j)                  
            {
                ratio = a[j][i] / a[i][i];  
                for(k = 0; k < 2 * n; k++) 
                    a[j][k] = a[j][k] - ratio * a[i][k];    
            }
        }
    }
    for(i = 0; i < n; i++)              
    {
        for(j = 0; j < 2 * n; j++)      
            a[i][j] = a[i][j] / a[i][i];
    }
    printf("\nInverse Matrix:\n");     

    for(i = 0; i < n; i++)              
    {
        for(j = n; j < 2 * n; j++)      
            printf("%.2f\t", a[i][j]);
        printf("\n");                   
    }
}
int main()                             
{
    int n, i, j;                       
    float a[10][20];                    
    printf("Enter order of matrix: ");  
    scanf("%d", &n);                    
    printf("Enter matrix elements:\n"); 

    for(i = 0; i < n; i++)              
    {
        for(j = 0; j < n; j++)          
        {
            scanf("%f", &a[i][j]);     
        }
    }
    inverseMatrix(a, n);              
    return 0;                        
}
