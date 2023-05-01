#include<math.h>
#include<stdio.h>

int soma(int x,int y){
     if(y==0){
       return x;
     } else {
        soma(x+1,y-1);
     }
}
int main(){
    int x,y;
    printf("Digite um 2 numeros naturais (soma)==>");
    scanf("%d %d",&x,&y);
    printf("%d",soma(x,y));


}

