#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, string> estudiantes;
	int num_estudiantes, max = INT_MIN, preguntas_diciembre, preguntas_enero, total_preguntas;
	char nombre[15];
	
	scanf("%d", &num_estudiantes);
	
	while(num_estudiantes--){
		scanf("%s %d %d", nombre, &preguntas_diciembre, &preguntas_enero);
		
		total_preguntas = abs(preguntas_diciembre-preguntas_enero);
		
		if(max == total_preguntas)	
			total_preguntas--;		
		
		if(max < total_preguntas)
			max = total_preguntas;
			
		estudiantes[total_preguntas] = nombre;
		
	}
	
	cout<<estudiantes.at(max)<<" "<<max<<"\n";
	
	return 0;
}
