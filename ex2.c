#include <stdio.h>

int main() {
	
  int i = 1;
  float total = 0, nota;
  
  
  while(nota != -5){
  	
 printf ("Escreva sua nota %d: ", i);
  scanf("%f", &nota);
  if(nota != -5){
  total = total + nota;
  i++;
  } else {
  	i--;
  }
}
  
 	float media = total / i;
 	printf("Sua media e: %.1f",media);


  return 0;
}


