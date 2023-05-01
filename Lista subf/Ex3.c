#include<stdio.h>
#include<math.h>

int SegG (int a , int b , int c){
       int delta;
       delta = pow(b,2) - 4*a*c;
       return delta;
}

int main(){
      int a,b,c,result;
       printf("Informe a, b e c\n");
       scanf("%d %d %d",&a,&b,&c);
       result = SegG(a,b,c);
       printf("Delta=%d",result);
}
