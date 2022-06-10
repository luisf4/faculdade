#include <stdio.h>

int main() {
    float ladoA, ladoB, ladoC;

    scanf("%f", &ladoA);
    scanf("%f", &ladoB);
    scanf("%f", &ladoC);

    if (ladoA<ladoB+ladoC && ladoB<ladoA+ladoC && ladoC< ladoA+ ladoB){
        printf(" Froma um triangulo ");
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("equilatero");
        }
        else {
            if (ladoA==ladoB || ladoA == ladoC || ladoB == ladoC) {
                printf("isosceles");
            }
            else {
                printf("Escaleno");
            }
        }
    }
    else {
        printf("não forma um triangulo");
    }
}