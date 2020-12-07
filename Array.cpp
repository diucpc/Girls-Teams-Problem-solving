#include <stdio.h>
 int main()
 {
    float cgpaOfSumaiya = 3.80;
    float cgpaOfFarhana = 3.85;
    float cgpaOfLiza= 3.70;
    float cgpaOfDola= 3.81;

    //printf("Print from normal variable %f", cgpaOfSumaiya);

// one Dimentional array
// single[] Squere box
    float cgpas[] = {3.80, 3.85, 3.70, 3.81};

    // multi mimentional Arra
    // mat means matrix
    // 5    6   0
    // 9    1   5
    // 8    39  2

    int mat[3][3] = {
        {5,6,0},
        {9,1,5},
        {8,39,2}
    };


    for(int i=0; i<3;i++){
        for (int j=0; j<=2; j++){
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }


 return 0;

 }
