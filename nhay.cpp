#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>
#include <iterator>
#include <string.h>
#include <cstdio>

using namespace std;

int main(){

	int tam;
	while((scanf("%d", &tam))!=EOF){
	std::string padrao;
	cin >> padrao;
	std::string texto;
	cin >> texto;
	int tamP = padrao.length();
	int tamT = texto.length();

	int cnt=0;

		for(int j=0;j<tamT;j++){
			if(texto.at(j)==padrao.at(0)){ //deu matching
				int aux0=0;
				int k=j;
					while(texto.at(k)==padrao.at(aux0) && aux0<tamP){
						k++;
						aux0++;
					}

				if(aux0==tamP-1) {
					cnt++;
					cout << j << endl;
				}
			}
		}
		if(cnt==0) cout << endl;
	}

	return 0;
}
