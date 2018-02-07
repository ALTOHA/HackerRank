#include <bits/stdc++.h>

using namespace std;

int main(){
	int tamano, arr[10005], i, min = 0, max = 0, arr2[10005];
	
	scanf("%d", &tamano);
	
	for(i=0; i<tamano; i++){
		scanf("%d", &arr[i]), arr2[i] = arr[i];
		if(arr[i] == 1)
			max++;
	}
	
	for(i=0; i<tamano; i++){
		
		if(arr[i] == 1){
			arr[i] = 0;
		
			if(arr[i+1] == 1)
				arr[i+1] = 0;
			
		min++;	
		}
	}
	
	printf("%d %d\n", min, max);
	
	return 0;
}
