#include <stdio.h>

int verificar(int sudoku[9][9]) {
    int i, j, k, l;
    int contador[10];
    
    for (i = 0; i < 9; i++) {
        for (k = 1; k <= 9; k++) contador[k] = 0;
        for (j = 0; j < 9; j++) {
            contador[sudoku[i][j]]++;
        }
        for (k = 1; k <= 9; k++) {
            if (contador[k] != 1) return 0;
        }
    }
    
    for (j = 0; j < 9; j++) {
        for (k = 1; k <= 9; k++) contador[k] = 0;
        for (i = 0; i < 9; i++) {
            contador[sudoku[i][j]]++;
        }
        for (k = 1; k <= 9; k++) {
            if (contador[k] != 1) return 0;
        }
    }
    
    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (k = 1; k <= 9; k++) contador[k] = 0;
            for (l = 0; l < 3; l++) {
                for (int m = 0; m < 3; m++) {
                    contador[sudoku[i + l][j + m]]++;
                }
            }
            for (k = 1; k <= 9; k++) {
                if (contador[k] != 1) return 0;
            }
        }
    }
    return 1; 
}

int main() {
    int N, instancia = 1;
    scanf("%d", &N);

    while (N--) {
        int sudoku[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }

        printf("Instancia %d\n", instancia++);

        if (verificar(sudoku))
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
