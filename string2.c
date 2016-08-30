#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int instancia=0;
int flag=0;
int tamP,tamA,i,j;

int main (){
  instancia++;
  char *assinatura, *palavra;

  scanf("%s", &assinatura);

  while(assinatura!='0'){
    scanf("%s", &palavra);
    tamP = strlen(palavra);
    tamA = strlen(assinatura);
    char *assinatura = (char*)calloc(tamA, sizeof(char));
    char *palavra = (char*)calloc(tamP, sizeof(char));
    j=0;
    for(i=0;i<tamP;i++){
      if(palavra[i]==assinatura[j]){
      j++;
      if (j==tamA){
        printf("Instancia %d\n",instancia);
        printf("verdadeira\n\n");
      flag=1;
      j=0;
      break;
    }
      }
      else j=0;
    }


  if(flag==0) {
  printf("Instancia %d\n",instancia);
  printf("falsa\n\n");
}
  free(assinatura);
  free(palavra);
  scanf("%s", assinatura);

  }

  return 0;
}
