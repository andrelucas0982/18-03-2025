#include <stdio.h>

int main() {
	
	int A, B, C, CatetoMaior, Cateto1, Cateto2;

    printf("Digite o 1 valor: ");
	scanf("%d", &A);
    
	while(A != -1)
	{
    printf("Digite o 2 valor: ");
    scanf("%d", &B);
    
    printf("Digite o 3 valor: ");
    scanf("%d", &C);


        if(A > B){
            if(A > C){
                
                CatetoMaior = A;
                Cateto1     = B;
                Cateto2     = C;
                
            }
        }else if(B > C){
            if(B > A){
                CatetoMaior = B;
                Cateto1 = A;
                Cateto2 = C;
            }
        } else {
                CatetoMaior = C;
                Cateto1     = A;
                Cateto2     = B;
        }


        if((Cateto1 * Cateto1) + (Cateto2 * Cateto2) == (CatetoMaior * CatetoMaior) )
            puts("Forma um triangulo retangulo.\n");
        else
            puts("Não forma um triangulo retangulo.\n");
        
	
	printf("Digite o 1 valor: ");
	scanf("%d", &A);
    }
    
  return 0;
}



