#include <stdio.h>

int main() {
    float alturas=0, arg0;
    int arg1, i=0;

    while(1) {
        printf("Digite a idade da pessoa: ");
        scanf("%d", &arg1);
        if (arg1 < 1) break;
        printf("Digite a altura da pessoa: ");
        scanf("%f", &arg0);
        if (arg1 > 39 && arg1 < 51) {
            alturas += arg0;
            i++;
        }
    }
    printf("A media das alturas das pessoas com idade entre 40 e 50 anos eh: %f\n", alturas/i);
    return 0;
}
