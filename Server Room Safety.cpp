#include <bits/stdc++.h>

using namespace std;

int main(){
	bool izquierda = false, derecha=false;
	int num_torre, posicion[1000], i, torre[10000], max = INT_MIN, min = INT_MAX, pos1, pos2, prueba[10000], val, j, prueba2[10000];
	
	fill(torre, torre+10000, 0);
	fill(prueba, prueba+10000, 0);
	fill(prueba2, prueba2+10000, 0);
	
	scanf("%d", &num_torre);
	
	for(i=0; i< num_torre; i++){
		scanf("%d", &posicion[i]);
		
		if(posicion[i] < min)
			min = posicion[i];
			
		if(posicion[i] > max)
			max = posicion[i];
	}
	for(i=0; i<num_torre; i++)
		scanf("%d", &torre[posicion[i]]), prueba[posicion[i]] = prueba2[posicion[i]] = torre[posicion[i]]; 
	

	for(i = min; i<max; i++){
		if(torre[i] > 0){
			val = torre[i] + i;
			
			for(j = i; j <=val ; j++){
				if(prueba[j] == 0)
					prueba[j] = -1;
			}
		}
		
	}
	for(i=min; i<=max; i++){
		if(prueba[i] == 0)
			break;
		if(i == max)
			izquierda = true;
	}
	
	for(i = max; i>min; i--){
		if(torre[i] > 0){
			val = i - torre[i];
			
			for(j=i; j>=val; j--){
				if(prueba2[j] == 0)
					prueba2[j] = -1;
			}
		}
	}
	for(i=min; i<=max; i++){
		if(prueba2[i] == 0)
			break;
		if(i == max)
			derecha = true;
	}	
	
	if(derecha == true && izquierda == true)
		printf("BOTH\n");
	if(derecha == true && izquierda == false)
		printf("RIGHT\n");
	if(derecha == false && izquierda == true)
		printf("LEFT\n");
	if(derecha == false && izquierda == false)
		printf("NONE\n");
	
	return 0;
}
