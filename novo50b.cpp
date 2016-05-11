#include <iostream>
#include <string>

using namespace std;

int main(){

	std::string str;
	int cnt=0;
	cin >> str;
	int tam = str.length();

		while(tam>0){
		for(int i=0;i<tam;i++){
			if(str.at(0)==str.at(i)) {
				cnt++;
			if(j<i) cnt++;
		}
		}
		str.erase (0,1);
		tam = str.length();
	}

	cout << cnt << endl;

}
