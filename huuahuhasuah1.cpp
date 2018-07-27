#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>



void merge(int vec[], int vecSize) {
  int mid;
  int i, j, k;
  int* tmp;
 
  tmp = (int*) malloc(vecSize * sizeof(int));
  if (tmp == NULL) {
  exit(1);
  }
 
  mid = vecSize / 2;
  
  i = 0;
  j = mid;
  k = 0;
  while (i < mid && j < vecSize) {
    if (vec[i] <= vec[j]) {
      tmp[k] = vec[i++];
    }
    else {
      tmp[k] = vec[j++];
    }
    ++k;
  }
 
  if (i == mid) {
    while (j < vecSize) {
      tmp[k++] = vec[j++];
    }
  }
  else {
    while (i < mid) {
      tmp[k++] = vec[i++];
 
    }
  }
 
  for (i = 0; i < vecSize; ++i) {
    vec[i] = tmp[i];
    
  }
 
  free(tmp);

  return mid;
}
 
void mergeSort(int vec[], int vecSize) {
  int mid;
 
  if (vecSize > 1) {
    mid = vecSize / 2;
    mergeSort(vec, mid);
    mergeSort(vec + mid, vecSize - mid);
    merge(vec, vecSize);
  }
}


main()
{ 
      int a;
      
      printf("Digite o tamnho do vetor");
      scanf("%d", &a);
      int vet[a], veti[a];
      
      for(int i=0; i<a; i++){
              printf("Digite o valor para o vetor na posição [%d] \t", i);
              scanf("%d \n", & vet[i]);
              }
      mergeSort(vet, a);
      
      printf("%d", merge);
      getch();
   
      //veti[a] = merge(vet, a);
      
      /*for(int j=0; j<a; j++){
              printf("%d \n", veti[j]);
              } 
      getch();*/
}
