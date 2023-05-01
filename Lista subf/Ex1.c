#include<stdio.h>
#include<math.h>

float Peso(float altura ,char sexo){
     float pesoIdeal;
     if(sexo ==  'm'){
         pesoIdeal = (72.7 * altura ) - 58;
     }  else if (sexo ==  'f'){
         pesoIdeal = ( 62.1 * altura ) - 44.7;
     } else {
         printf("Só existem 2 genero pohh");
     }
      return pesoIdeal;
}
int main(){
    float altura;
    char sexo;
     printf("Informe a Sua altura\n");
       scanf("%f",&altura);
     printf("Informe seu sexo\n");
       getchar();
       scanf("%c",&sexo);
     float result = Peso(altura,sexo);
     printf("O peso ideal ser:%0.2f",result);
}
