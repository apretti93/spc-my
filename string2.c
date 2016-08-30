#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int instancia=0;
int flag=0;
char charassinatura[1000001],charpalavra[300001];
int tamP,tamA,i,j;
//char** assinatura,palavra;

int main (){
  instancia++;
  //printf("Instancia %d\n",instancia);
  scanf("%s", &charassinatura);

  while(charassinatura!='0'){
    scanf("%s", &charpalavra);
    tamP = strlen(charpalavra);
    tamA = strlen(charassinatura);
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
  puts(assinatura);
  free(assinatura);
  free(palavra);
  scanf("%s", charassinatura);

  }

  return 0;
}

//printf("Estou aqui");
