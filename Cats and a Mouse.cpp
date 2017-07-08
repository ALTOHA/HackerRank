#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int A, B, C, casos;
	scanf ("%d", &casos);
	
	while (casos--){
		scanf ("%d %d %d", &A, &B, &C);
		if(abs(C-A) > abs(C-B))
			printf ("Cat B\n");
		else if (abs(C-A) < abs(C-B))
			printf ("Cat A\n");
		else printf ("Mouse C\n"); 	
	}
	return 0;
}
