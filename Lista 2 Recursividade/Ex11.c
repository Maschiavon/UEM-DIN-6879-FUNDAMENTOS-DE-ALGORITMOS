#include<math.h>
#include<stdio.h>

int fat(int num){
     if(num==1){

     } else {
       return num*fat(num-2);
     }
}

int main(){
    int num;
    printf("Digite um n impar(!!)==>");
    scanf("%d",&num);
    printf("%d",fat(num));

}
