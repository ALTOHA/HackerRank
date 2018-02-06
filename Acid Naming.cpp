#include <bits/stdc++.h>

using namespace std;

int main(){
	char acido[10005];
	int casos;
	bool hydro, ic;
	scanf("%d", &casos);
	
	while(casos--){
		hydro = false, ic = false;
		scanf("%s", acido);
		
		for(int i = 0; i<strlen(acido); i++){
			if(i == 0 && acido[i] == 'h' && acido[i+1] == 'y' && acido[i+2] == 'd' && acido[i+3] == 'r' && acido[i+4] == 'o'){
				hydro = true;
				i = strlen(acido)-3;
			}
			if(i == strlen(acido) -2 && acido[i] == 'i' && acido[i+1] == 'c')
				ic = true;
		}
		if(hydro == true && ic == true) 
			printf("non-metal acid\n");
			
		else if(ic == true)
			printf("polyatomic acid\n");
		
		else
			printf("not an acid\n");
			
	}
	
	return 0;
}
