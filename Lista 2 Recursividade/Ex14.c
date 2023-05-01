#include<math.h>
#include<stdio.h>

int f(int num){
     if(num<=2){
        return 0;
     }if(num==3){
       return 1;
     }
     return f(num-1)+f(num-2)+f(num-3)+f(num-4);
}
int main(){
    int num;
    printf("Digite um n (tetranacci)==>");
    scanf("%d",&num);
    printf("%d",f(num));

}
