# include<stdio.h>

void bubble_sort (int vetor[], int n) {
    int i, j, aux;
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - 1; j++){
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
    int v[]={9,21,7,38,6,42,3,5,18};
    bubble_sort(v,9);
    for(int i=0;i<9;i++){
        printf("v[%d]= %d\n",i,v[i]);
    }
    return 0;
}