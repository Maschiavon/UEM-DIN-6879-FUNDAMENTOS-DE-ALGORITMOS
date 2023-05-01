#include<math.h>
#include<stdio.h>

int counter(int num){
     if(num==0){
       printf("%d",num);
     } else {
       printf("%d ",num);
       counter(num-1);
     }
}

int main(){
    int num;
    printf("Digite um numero(Dcres)==>");
    scanf("%d",&num);
    counter(num);

}
