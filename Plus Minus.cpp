#include <cstdio>

using namespace std;

int main(){
	float casos, numero, positivos=0, negativos=0, cero=0, total;
	scanf("%f", &casos);
	total=casos;
	while(casos--){
		scanf ("%f", &numero);
		if (numero>0)
			positivos++;
			
		else if (numero<0)
			negativos++;
			
		else 
			cero++;
	}
	printf ("%f\n%f\n%f\n", positivos/total, negativos/total, cero/total);
	return 0;
}
