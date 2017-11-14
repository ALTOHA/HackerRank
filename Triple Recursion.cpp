#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, k, matriz[100][100];
	
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i =0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == 0 && j == 0)
				matriz[i][j] = m;
				
			else if(i == j)
				matriz[i][j] = matriz[i-1][j-1]+k;
				
			else if(i > j)
				matriz[i][j] = matriz[i-1][j]-1;
				
			else if(i<j)
				matriz[i][j] = matriz[i][j-1]-1;
				
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
