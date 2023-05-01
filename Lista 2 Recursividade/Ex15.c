#include<math.h>
#include<stdio.h>

int padov(int num){
     if(num==0 || num==1){
        return 1;
     } if(num==2){
         return 1;
     }
     if(num>2){
       return padov(num-2) + padov(num - 3);
     }
}
int main(){
    int num;
    printf("Digite um n (padovanni)==>");
    scanf("%d",&num);
    printf("%d",padov(num));

}

