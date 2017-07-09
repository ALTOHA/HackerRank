#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	char jei[10000];
	int tamano, cadena1[10000], casos, i, j=0, cont, l=0;
	scanf ("%d", &casos);
	while(casos--){
		scanf ("%s", jei);
		tamano=strlen(jei);
		for (i=0; i<tamano; i++){
			if (i > 0)
				cadena1[i] = abs(jei[i] - jei[i-1]);
		} 
		j=tamano-1;
		
		for (i=1; i<tamano; i++){
			if (cadena1[i] == cadena1[j])
			cont++;
			
			j--;
		}
		(cont == tamano-1) ? printf ("Funny\n") : printf ("Not Funny\n");
		cont=0;
	}
	
	return 0;
}
