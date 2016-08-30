#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  char *assinatura, *palavra;
  int tamP,tamA;
  int i,j=0,flag=0;
  int instancia=0;
  int count;

  assinatura = (char*)malloc(9*sizeof(char));
  while(scanf("%s", assinatura)){
    if(assinatura=='\0') break;

  instancia++;
  palavra = (char*)calloc(300001,sizeof(char));

  scanf("%s", palavra);
  tamP = strlen(palavra);
  tamA = strlen(assinatura);
  for(i=0;i<tamP;i++){
      if(palavra[i]==assinatura[j]){
      j++;
      //printf("%d\n",j);
      if (j==tamA){
      //  printf("%d\n",flag);
        printf("Instancia %d\n",instancia);
        printf("verdadeira\n\n");
        flag=1;
      //  printf("%d\n",flag);

      }
    }
    else if(palavra[i]!=assinatura[j]) j=0;

    }
    if(flag==0){
      printf("Instancia %d\n",instancia);
      printf("falsa\n\n");
  }

  free(assinatura);
  free(palavra);
  j=0;
  assinatura = (char*)malloc(9*sizeof(char));
  flag=0;
}

  return 0;
}
