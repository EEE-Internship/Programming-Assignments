/*
Name: Amal Najeeb
USN: NNM24EE012
10th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: The following code is for proving that the curl of a vector H is perpendicular to the vector H.
*/

#include <stdio.h>
#include <math.h>

int main(){                           //vector H
    int i, x = 2, y = 3;
    int H[3] = {pow(x,2), y, 4};

    int CurlH[3] = {0, 0, 0};

    int dot_product = H[0]*CurlH[0] + H[1]*CurlH[1] + H[2]*CurlH[2];    //finding dot product of H and Curl of H

    //Printing inputs and outputs
    printf("Vector H = %di + %dj + %dk\n", H[0], H[1], H[2]);
    printf("Curl of H = %di + %dj + %dk\n\n", CurlH[0], CurlH[1], CurlH[2]);

    if(dot_product == 0){
        printf("Their dot product is = %d. Therefore, they are perpendicular to each other.", dot_product);
    } else {
        printf("Since their dot product is = %d. They are not perpendicular to each other.", dot_product);
    }

}

/*
Output
----------------

Vector H = 4i + 3j + 4k
Curl of H = 0i + 0j + 0k

Their dot product is = 0. Therefore, they are perpendicular to each other.

*/