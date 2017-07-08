#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int matriz[100], casos, suma1, i, j, cont=0, cont2, res;
	scanf ("%d", &casos);
	cont2 = casos-1;
	for (i=0; i<casos; i++){
		for (j=0; j<casos; j++){
			scanf ("%d", &matriz[j]);
			
			if (j==cont){
				suma1+=matriz[j];
			}
			if (j==cont2){
				suma1-=matriz[j];
			}
		}
		cont++, cont2--;
	}
	printf ("%d\n", abs(suma1));

	return 0;
}
