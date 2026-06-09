/*
Name: Amal Najeeb
USN: NNM24EE012
9th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: The following code is psudo code for proving that the curl of a vector H is perpendicular to the vector H.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float H[3] = {4,2,4};                           //vector H
    int i, x, y, z;

    float CurlH[3]; 
    
    CurlH[0] = diff(H[2],y) - diff(H[1],z);         //creating curl of H using cross product formula
    CurlH[1] = diff(H[0],z) - diff(H[2],x);
    CurlH[2] = diff(H[1],x) - diff(H[0],y);

    float dot_product = H[0]*CurlH[0] + H[1]*CurlH[1] + H[2]*CurlH[2];    //finding dot product of H and Curl of H

    //Printing inputs and outputs
    printf("Vector H = %fi + %fj + %fk", H[0], H[1], H[2]);
    printf("Curl of H = %fi + %fj + %fk", CurlH[0], CurlH[1], CurlH[2]);
    printf("Since their dot product is = %d. They are perpendicular to each other.");

}

/*
Expected Output
----------------

Vector H = 4i + 2j + 4k
Curl of H =  i +  j +  k
Since their dot product is = 0. They are perpendicular to each other.

*/