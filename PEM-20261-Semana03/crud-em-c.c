#include <stdio.h>

int main(){

    int opcao=0, i, id, novoID;
    int encontrado;
    int idProduto[10]={0,0,0,0,0,0,0,0,0,0};

    while(opcao!=10){
        printf("\n1. Inclusao\n2. Consulta\n3. Alteracao\n4. Exclusao\n5. Lista todos\n10. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Informe o ID do produto: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i=0; i<10; i++){
                    if(idProduto[i] == 0){
                        idProduto[i] = id;
                        printf("Produto inserido na posicao %d\n", i);
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado == 0){
                    printf("Array cheio!\n");
                }
                break;
            case 2:
                printf("Informe o ID do produto: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i=0; i<10; i++){
                    if(idProduto[i] == id){
                        printf("Produto encontrado na posicao %d\n", i);
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado == 0){
                    printf("Produto nao encontrado.\n");
                }
                break;
            case 3:
                printf("Informe o ID do produto que deseja alterar: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i=0; i<10; i++){
                    if(idProduto[i] == id){
                        printf("Informe o novo ID: ");
                        scanf("%d", &novoID);

                        idProduto[i] = novoID;
                        printf("Produto alterado com sucesso!\n");
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado == 0){
                    printf("Produto nao encontrado.\n");
                }
                break;
            case 4:
                printf("Informe o ID do produto que deseja excluir: ");
                scanf("%d", &id);

                encontrado = 0;
                for(i=0; i<10; i++){
                    if(idProduto[i] == id){
                        idProduto[i] = 0;
                        printf("Produto excluido com sucesso!\n");
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado == 0){
                    printf("Produto nao encontrado.\n");
                }
                break;
            case 5:
                printf("\n*----- Lista de produtos -----*\n");
                for(i=0; i<10; i++){
                    printf("Posicao %d: %d\n", i, idProduto[i]);
                }
                printf("*-----------------------------*\n");
                break;
            case 10:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    return 0;
}