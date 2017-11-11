#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_bit, val1[101], val2[101], m, k, max=0;
	
	scanf("%d %d %d", &num_bit, &m, &k);
	
	for(int i=0; i<num_bit; i++){
		scanf("%d", &val1[i]);
	}
	for(int j=0; j<num_bit; j++){
		scanf("%d", &val2[j]);
		
		if(max < val2[j]*val1[j]*m)
			max = val2[j]*val1[j]*m;
	}
	
	(max > m*k) ? printf("%d\n", max) : printf("%d\n", m*k);
	
	return 0;
}
