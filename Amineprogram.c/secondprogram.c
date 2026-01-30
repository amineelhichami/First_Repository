#include <stdio.h>
int main(void) {
int a = 7;
int b = (3*a)%5;
for (a++ ; a > b ; b+=2)
printf("(%d,%d)", a, b);
return 0;
}