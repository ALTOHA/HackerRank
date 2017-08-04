#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char correo[150], cor[15]="@hogwarts.com";
	int tamano,  cont=0, cont2=0, i, l=0;
	scanf ("%s", correo);
	tamano=strlen(correo);
	for (i=0; i<tamano; i++){
		if (i < 5){
			if (correo[i] >= 'a' && correo[i] <= 'z')
				cont++;
		}
		else{
			if (correo[i] == cor[l])
				cont2++;
				
			l++;
		}
	}
	(cont2 == 13 && cont == 5 && tamano==18) ? printf ("Yes\n") : printf ("No\n");
	return 0;
}
