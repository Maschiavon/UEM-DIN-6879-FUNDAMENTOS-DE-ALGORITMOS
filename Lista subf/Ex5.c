#include<stdio.h>
#include<math.h>

 float media(int n1,int n2,int n3){
        float media, menor;
        menor = n1;
        if(menor>n2){
          menor = n2;
        }
        if(menor>n3){
          menor = n3;
        }
        media = (n1+n2+n3-menor)/2.0;
        return media;
 }
 int main(){
       int n1,n2,n3;
       float result;
       printf("Informe as 3 notas\n");
       scanf("%d %d %d",&n1,&n2,&n3);
       result = media(n1,n2,n3);
       printf("A media Legal é : %0.2f",result);
 }
