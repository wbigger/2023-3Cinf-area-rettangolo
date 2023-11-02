#include <stdio.h>

int calcola_area_rettangolo(int base, int altezza) {
    return base*base;
}

int main() {
    int area = calcola_area_rettangolo(10,20);
    printf("L'area del rettangolo e': %d",area);
}

