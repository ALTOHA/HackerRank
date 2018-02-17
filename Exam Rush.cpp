#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_examenes, horas, examen[100000], i, total=0;
	
	scanf("%d %d", &num_examenes, &horas);
	
	for(i=0; i<num_examenes; i++){
		scanf("%d", &examen[i]);
	}
	
	sort(examen, examen+i);
	
	for(i=0; i<num_examenes; i++){
		if(examen[i] <= horas)
			total++, horas-=examen[i];
	}
	
	printf("%d\n", total);
	return 0;
}
