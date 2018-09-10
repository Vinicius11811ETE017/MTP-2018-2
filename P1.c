#include <stdio.h>

int main()
{
    int i = 0;
    char nro[256];
    int estado = 0;
    printf("Digite o nro: \n");
    scanf("%s",nro);
    while(nro[i] != '0'){
        if(estado == 0 && nro[i] == '0'){
        estado = 0;
        }
        else{
            estado = 1;
        }
        if(estado == 1 && nro[i] == '0'){
        estado = 2;
        }
        else{
            estado = 0;
        }
        if(estado == 2 && nro[i] == '0'){
        estado = 1;
        }
        else{
            estado = 2;
        }
        
            i++;
}
if(estado == 0){
    printf("E multiplo de 3");
}
else {
    printf("Nao e multiplo de 3");
}
    return 0;
}
