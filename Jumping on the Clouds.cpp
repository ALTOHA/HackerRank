#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_nubes, nubes[105], i, cont = 0;
	
	scanf("%d",&num_nubes);
	
	for(i=0; i<num_nubes; i++)
		scanf("%d", &nubes[i]);
	
	for(i=0; i<num_nubes; i++){
		
		if(i==num_nubes-1)
			break;
			
		if(nubes[i+2] == 0){
			cont++;
			i++;
		}
		else 
			cont++;
	}
	
	printf("%d\n", cont);
	return 0;
}
