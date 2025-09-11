#include <stdio.h>


int main(){
    float a = 1.1f;
    printf("%f\n", &a);
    a = a + 0.1f;
    printf("%f\n", &a);
    a = a + 0.1f;
    printf("%f", &a);
}