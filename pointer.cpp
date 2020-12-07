
#include <stdio.h>

int main(){

    int a = 5;

    // Memory Address of variable 'a'
    int *memAddrssOfA= &a;

    printf("%d\n", a);
    printf("%x", &a);

    // show only memory addesss. b'coz there are no static
    printf("\n%x\n", memAddrssOfA);
    // it wii show the value of memAddrssOfA memory address
    printf("%d", *memAddrssOfA);

return 0;
}
