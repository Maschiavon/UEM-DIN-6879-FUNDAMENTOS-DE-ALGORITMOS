#include<math.h>
#include<stdio.h>

int f(int num){
     if(num==1){
       return 1 ;
     } else {
       return pow(num, f(num - 1));
     }
}

int main(){
    int num;
    printf("Digite um n (!exponencial)==>");
    scanf("%d",&num);
    printf("%d",f(num));

}
