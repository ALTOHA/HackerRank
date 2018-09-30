#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> pares;
	map <int, int> :: iterator it;
	int num_calcetines, calce, cont = 0;
	
	
	scanf("%d", &num_calcetines);
	
	while(num_calcetines--){
		scanf("%d", &calce);
		
		pares[calce]++;
	}
	
	for(it=pares.begin(); it!= pares.end(); it++){
		cont+=(it->second/2);
	}
	
	printf("%d\n", cont);
	
	return 0;
}
