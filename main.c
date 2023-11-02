#include <stdio.h>
#include <assert.h>

int calcola_area_rettangolo(int base, int altezza) {
    return base*altezza;
}

int main() {
    int area = calcola_area_rettangolo(10,20);
    printf("L'area del rettangolo e': %d",area);

    // Test
    assert(calcola_area_rettangolo(10,20)==200);

    printf("Tutti i test sono andati a buon fine");
    return 0;
}

