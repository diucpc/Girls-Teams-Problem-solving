
#include <stdio.h>

int main(){
    int numberOfStudent;
    scanf("%d", &numberOfStudent);

    int batchs[numberOfStudent], names[numberOfStudent], rolls[numberOfStudent], cgpas[numberOfStudent];

    for (int i =0; i< numberOfStudent; i++){
        scanf("%d", & batchs[i]);
        scanf("%d", & rolls[i]);
        scanf("%d", & cgpas[i]);


    }
printf("Batch\tRoll\tCGPA");
    for(int i =0; i<numberOfStudent; i++){
        printf("%d\t%d\t%d\n", batchs[i], rolls[i],cgpas[i]);
    }


    for (int i =0; i< numberOfStudent; i++){
        printf("|----------------------------------------|\n");
    }
    return 0;
}
