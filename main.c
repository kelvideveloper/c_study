#include <stdio.h>
#include <math.h>
int main()
{   
    int capacidade, itens;
    scanf("%d%d",&capacidade, &itens);
    double storage[10][10];

    for(int i = 0; i < itens;i++){
        int peso;
        double valor ;
        scanf("%d%lf",&peso, &valor);
        for(int j = 0; j < capacidade;j++){
            
                if(i != 0 && j + 1 > peso && (storage[i-1][j-peso] + valor) > storage[i-1][j]){
                  storage[i][j] = storage[i-1][j-peso] + valor;
                }
                else if(i != 0 && j+1>= peso && valor < storage[i-1][j]){
                    storage[i][j] = storage[i-1][j];
                }
                else if(j+1 < peso){
                    storage[i][j] = -1;
                }
                else{
                    storage[i][j] = valor;
                }
            
        }
    }
    printf("%lf", storage[itens-1][capacidade-1]);
    return 0;
}
