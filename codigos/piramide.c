#include <stdio.h>


void piramideInvertida(int n){
    
    for (int i = 1; i <= n; i++){
        
        for (int k = 1; k <= (i - 1); k++){
                printf(" ");
            }
        
        for (int j = 1; j <= 2 * (n - i) + 1; j++){
            printf("*");
            
        }
        
        printf("\n");
    }
    
}


void piramideArvore(int n){
    
    for (int i = n; i >= 1; i--){
        
        for (int k = 1; k <= (i - 1); k++){
                printf(" ");
            }
        
        for (int j = 1; j <= 2 * (n - i) + 1; j++){
            printf("*");
            
        }
        
        printf("\n");
    }
    
}



void piramide(int n, char* escolha){
    
    if (escolha == "<") {
        piramideInvertida(n);
    
        
    } else if (escolha == ">") {
        piramideArvore(n);
        
    } else {
        printf("opção invalida");
        
    }
    
}


int main(){
   
   piramide(5, ">");
   
   piramide(5, "<");
   
   piramide(5, "=");
   
    return 0;
}
