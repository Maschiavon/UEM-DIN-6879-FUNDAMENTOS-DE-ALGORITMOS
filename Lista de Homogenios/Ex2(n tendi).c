#include<math.h>
#include<stdio.h>

int main(){
  int vet[20],i,n,
     d = 2,count=0,
     EhPrimo = 1;
     printf("Apartir deste 20 numeros primos==>");
      scanf("%d",&n);
    while(count<20){
        if (n <= 1){
        EhPrimo = 0;
        }
         printf("Passei1");
        while (EhPrimo == 1 && d <= sqrt(n)) {
	      printf("whileee");
	      if (n % d  == 0)
	        EhPrimo = 0;
	        d = d + 1;
        }

          if (EhPrimo == 1){
	        vet[count]=n;
	        count+=1;
	        printf("Passei2");
          }
          n=n+1;
    }
    for(i=0;i<20;i++){
        printf("%d",vet[i]);
    }

}

