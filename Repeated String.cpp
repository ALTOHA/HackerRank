#include <bits/stdc++.h>

using namespace std;

unsigned long long int repeticiones, cont = 0, i, mod, dive;
char cadena[1000];

int main(){
	scanf("%s %llu", cadena, &repeticiones);
	
	for(i=0; i<strlen(cadena); i++){
		if(cadena[i] == 'a')
			cont++;
	}
	
	dive = repeticiones / strlen(cadena);
	mod = repeticiones % strlen(cadena);
	cont*=dive;
	
	
	for(i=0; i<mod; i++){
		if(cadena[i] == 'a')
			cont++;
	}
		
	cout << cont << "\n";
	
	
	return 0;
}
