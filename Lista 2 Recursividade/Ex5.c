#include<math.h>
#include<stdio.h>

int mult(int k,int n){
     if(n==0){
       return 0;
     } else {
        return k+mult(k,n-1);
     }
}

int main(){
    int k,n,r;
    printf("digite k e n respectivamente==>");
    scanf("%d %d",&k,&n);
    r=mult(k,n);
    printf("%d",r);
}
