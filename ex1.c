#include <stdio.h>

int main() {
	
  int i = 1;
  float total = 0, nota;
  
  
  while(i <= 3){
  	
 printf ("Escreva sua nota %d: ", i);
  scanf("%f", &nota);
  total = total + nota;
  i++;
  
}
  
 	float media = total / 3;
 	printf("Sua media e: %.1f",media);


  return 0;
}


