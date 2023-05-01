#include<math.h>
#include<stdio.h>

int main(){
 int A[10],B[10],C[20],i=0,j=0,c=0;
  //INSERCAO
  for(i=0;i<10;i++){
     printf("Preencha %d A=>",i+1);
     scanf("%d",&A[i]);
  }
  for(i=0;i<10;i++){
     printf("Preencha %d B=>",i+1);
     scanf("%d",&B[i]);
  }
  i=0;
  j=0;
  //INSERIRNDO A
  for(i=0;i<10;i++){
      C[i]=A[i];
  }
  //ADICIONANDO DE B
  for(i=0;i<10;i++){
     for(j=0;j<10;j++){
        if(B[i]!=A[j]){
            c+=1;
        }
        if(c==10){
            C[i+10]=B[i];
        }
     }
  }
  for(i=0;i<20;i++){
      printf("%d-%d\n",i+1,C[i]);
  }


}
