#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int dinero, teclado, usb, tec[1000], us[1000], i, j, res=0;
	scanf ("%d %d %d", &dinero, &teclado, &usb);
	for (i=0; i<teclado; i++){
		scanf ("%d", &tec[i]);
	}
	for (i=0; i<usb; i++){
		scanf ("%d", &us[i]);
	}
	for (i=0; i<teclado; i++){
		for (j=0; j<usb; j++){
			if (tec[i]+us[j] < dinero && tec[i]+us[j]>res)
				res=tec[i]+us[j];
			else if (tec[i]+us[j]==dinero){
				res=dinero;
				break;
			}
		}
	}
	if (res==0)
		res=-1;
	
	printf ("%d\n", res);
	return 0;
}
