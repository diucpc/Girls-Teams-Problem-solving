#include <stdio.h>

int main()
{
int leftHand, reghtHand, dolasHand;
leftHand =50;
reghtHand= 80;


dolasHand = leftHand;
leftHand = reghtHand;
reghtHand = dolasHand;

printf("Left Hand = %d  Right Hand = %d", leftHand, reghtHand);





 return 0;
}
