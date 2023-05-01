#include<stdio.h>
#include<math.h>

 void Bubble_sort(int vet[],int n){
       int i,k,aux;
       for(k=1;k<n;k++){
          for(i=0;i<n-k;i++){
            if(vet[i]<vet[i+1]){
               aux=vet[i];
               vet[i]=vet[i+1];
               vet[i+1]=aux;
            }
          }
       }
 }
 void Selection_sort(int vetor[], int tam) {
    for (int indice = 0; indice < tam; ++indice) {
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < tam; ++indiceSeguinte) {
            if (vetor[indiceSeguinte] > vetor[indiceMenor]) {
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
}
 void Insertion_sort(int* original, int length) {
	int i, j, atual;
	for (i = 1; i < length; i++) {
		atual = original[i];
		for (j = i - 1; (j >= 0) && (atual > original[j]); j--) {
			original[j + 1] = original[j];
        }
		original[j+1] = atual;
	}

}

 int main(){
    int vet[5],n,i,c;
    for(i=0;i<5;i++){
      printf("Informe o numero==>");
      scanf("%d",&vet[i]);
    }

    printf("Escolha 1 dos 3:\nBubble_sort(Decrescente)=1\nSelection_Sort(Decrescente)=2\nInsertion_sort(Decrescente)=3\n==>");
    scanf("%d",&c);
    if(c==1){
        Bubble_sort(vet,5);
        for(i=0;i<5;i++){
        printf("%d - ",vet[i]);
        }
    } else if(c==2){
        Selection_sort(vet,5);
        for(i=0;i<5;i++){
        printf("%d - ",vet[i]);
        }
    } else {
        Insertion_sort(vet,5);
        for(i=0;i<5;i++){
        printf("%d - ",vet[i]);
        }
    }
 }
