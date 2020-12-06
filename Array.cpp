#include <stdio.h>
 int main()
 {
    float cgpaOfSumaiya = 3.80;
    float cgpaOfFarhana = 3.85;
    float cgpaOfLiza= 3.70;
    float cgpaOfDola= 3.81;

    printf("Print from normal variable %f", cgpaOfSumaiya);


    float cgpas[] = {3.80, 3.85, 3.70, 3.81};

    for (int i=0; i < 4; i++){
        printf("%0.2f \n",cgpas[i]);

    }



 return 0;

 }
