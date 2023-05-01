#include<stdio.h>
#include<math.h>

float distancia(x1,y1,x2,y2){
       float distancia;
       distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
       return distancia;
}

int main(){
     int x1,x2,y1,y2;
     float r;
     printf("informe x1,y1,x2,y2");
     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
     r = distancia(x1,y1,x2,y2);
     printf("Distancia = %0.2f",r);
}
