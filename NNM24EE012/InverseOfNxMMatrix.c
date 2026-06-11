/*
Name: Amal Najeeb
USN: NNM24EE012
10th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: The following code calculates the inverse of a NxM matrix (non square matices)
<stdio.h> header is used for printf() and scanf() functions
*/

#include <stdio.h>

int main(){
    int N, M;

    printf("Enter no. of rows: ");       //takes no. of rows
    scanf("%d", &N);
    printf("Enter no. of columns: ");     //takes no. of columns
    scanf("%d", &M);

    if(N != M){                           //checking if its a square matrix
        printf("\nInverse of a matrix can only be found for square matrixes");
    }
}

/*
Output
------
Enter no. of rows: 3
Enter no. of columns: 4

Inverse of a matrix can only be found for square matrixes
*/