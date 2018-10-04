#include <bits/stdc++.h>

using namespace std;

int main(){
	bool valle = false;
	int pasos, i, cont = 0, cont2 = 0;
	char camino[1000000];
	
	scanf("%d %s", &pasos, camino);
	
	for(i=0; i<pasos; i++){
		if(camino[i] == 'D'){
			cont--;
			if(valle == false && cont < 0){
				valle = true;
				cont2++;
			}
			
		}
		
		if(camino[i] == 'U'){
			cont++;
			
			if(cont >= 0){
				valle = false;
			}
		}
		
	}
	
	printf("%d\n", cont2);
	
	return 0;
}
