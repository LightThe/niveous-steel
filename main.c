#include<stdio.h>

int main(int argc, char **argv){
    
    //TODO: Get actual inputs
    char passphrase[16] = "Thats my kung fu";
    

    //Key expansion
    //TODO: refactoring
    char key_mtx[4][4];
    for (int i = 0; i < 16; i++){
        key_mtx[i%4][(int)i/4] = passphrase[i];
    }
    //TODO: Generate s-boxes or whatever
    

    //Main menu input
    // char option = 'Q';
    // while (option!='Q')
    // {
    //     printf("Selecione a opcao desejada:\n Q - Sair do programa\nEscolha[Q]:");
    //     scanf("%c", &option);   
    // }
    
    return 0;
}