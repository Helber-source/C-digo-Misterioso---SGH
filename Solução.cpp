#include <stdio.h>
#include <stdlib.h>

int ativar_orbe(int codigo_secreto) {
    
    int numero_mistico = ((42 * 3) - (6 * 7)) + (12 * 3); 


    if (codigo_secreto == numero_mistico) {
        printf("O Orbe da Sabedoria brilha intensamente... Parab�ns, voc� revelou seu segredo!\n");
        return 1;
    } else {
        printf("O Orbe permanece inerte. Parece que este n�o � o c�digo certo...\n");
        return 0;
    }
}

int main() {
    int codigo_secreto;
    
    
    printf("Digite o c�digo secreto para ativar o Orbe da Sabedoria: ");
    scanf("%d", &codigo_secreto);

    
    ativar_orbe(codigo_secreto);

    return 0;
}

