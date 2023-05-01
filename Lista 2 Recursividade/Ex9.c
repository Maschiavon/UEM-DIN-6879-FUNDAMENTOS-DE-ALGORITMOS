#include<math.h>
#include<stdio.h>

int counter(int num){

     if(num==0){
       printf("%d",num);
     } else {
       counter(num-2);
       printf(" %d",num);

     }
}

int main(){
    int num;
    printf("Digite um n par(Cres)==>");
    scanf("%d",&num);
    counter(num);

}
