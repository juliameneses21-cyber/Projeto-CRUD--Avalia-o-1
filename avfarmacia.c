#include <stdio.h>
#include <string.h>

int main() {

  int codigo_produto[100];
    char nome_produto[100][50];
    float nota_eficacia[100];

    int total = 0;
    int opcao = 0;

    while (1) {
        printf("\n=== MENU DE AVALIACAO DE PRODUTOS ===\n");
        printf("1. REGISTRAR PRODUTO\n");
        printf("2. LISTAR PRODUTOS\n");
        printf("3. BUSCAR PRODUTO POR ID\n");
        printf("4. EDITAR PRODUTO\n");
        printf("5. EXCLUIR PRODUTO\n");
        printf("6. SAIR\n");
        printf("\nESCOLHA UMA OPCAO: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int continuar = 1;

            while (continuar == 1) {
                int indice;

                if (total >= 100) {
                    printf("LIMITE DE PRODUTOS ATINGIDO!\n");
                    break;
                }

                indice = total;

                printf("Digite o nome do medicamento: ");
                scanf("%49s", nome_produto[indice]);

                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo_produto[indice]);

                printf("Digite a nota (1.0 a 5.0): ");
                scanf("%f", &nota_eficacia[indice]);

                if (nota_eficacia[indice] >= 1.0f && nota_eficacia[indice] <= 5.0f) {
                    printf("\nAvaliacao salva!\n");
                    printf("Resumo: Medicamento %s (ID: %d) recebeu nota %.2f.\n",
                           nome_produto[indice], codigo_produto[indice], nota_eficacia[indice]);
                    total++;
                } else {
                    printf("\nNota invalida!\n");
                }

                printf("\nDeseja avaliar outro produto? (1-Sim / 0-Nao): ");
                scanf("%d", &continuar);
            }
          }
        }


 return 0;

}