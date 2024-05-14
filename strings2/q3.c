#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char senha [16];
    int tamanho = 0, i;
    printf("Digite a senha de no max 15: \n");
    gets(senha);
    while(senha[tamanho]!='\0'){
        tamanho++;
    }
      for(i=0; i<tamanho;i++){
        senha[i]='*';
    }
    if(tamanho > 16){
        printf("O numero de digitos ultrapassa o limite \n");
    }
    else if(tamanho < 8){
        printf("O numero de digitos eh inferior ao exigido\n");
        
    }
    else{
        printf("%s",senha);
    }
  
    
    return 0;
}
