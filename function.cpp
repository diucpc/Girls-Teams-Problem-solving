
#include <stdio.h>

// Return_type function_name( Parameter(s)){
//     statement
//}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int add(int a, int b){
int c = a+b;
return c;
}

// x^y = 3^2 = 9
// 4x4x4 = 64


int power(int x, int y){
    int res =1;
    for(int i =0; i < y; i++){
        res = res * x;
    }
    return res;
}

//struct struden{
  //  char [] name;
    //int money;
//}

int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    int z = add(x,y);
    printf("%d", z);
    int powerValue = power(x,y);
    printf("\n\nPower value %d\n\n", powerValue);
    swap(&x, &y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}
