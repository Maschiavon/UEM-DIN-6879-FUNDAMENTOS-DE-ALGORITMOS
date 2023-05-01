#include<math.h>
#include<stdio.h>

float c(float num){
     if(num==0){
        return 1;
     } if(num>0){
       return (2*(2*num-1)/(num+1))*c(num-1) ;
     }
}
int main(){
    float num;
    printf("Digite um n (catallan)==>");
    scanf("%f",&num);
    printf("%0.2f",c(num));

}

