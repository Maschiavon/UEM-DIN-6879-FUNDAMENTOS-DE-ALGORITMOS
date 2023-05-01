#include<math.h>
#include<stdio.h>

int counter(int num){

     if(num==0){
       printf("%d",num);
     } else {
       printf(" %d",num);
       counter(num-2);
     }
}

int main(){
    int num;
    printf("Digite um n par(Decres)==>");
    scanf("%d",&num);
    counter(num);

}
