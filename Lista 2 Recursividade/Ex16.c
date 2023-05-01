#include<math.h>
#include<stdio.h>

int pell(int num){
     if(num==0){
        return 0;
     } if(num==1){
         return 1;
     }
     if(num>=2){
       return 2*pell(num - 1) + pell(num - 2);
     }
}
int main(){
    int num;
    printf("Digite um n (pell)==>");
    scanf("%d",&num);
    printf("%d",pell(num));


}

