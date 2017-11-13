#include<bits/stdc++.h>

using namespace std;

int main(){
    int casos, cont=0, four=0, seven=0;
    char nombre[100], precio[100];
    
    map <int, string> lap;
    map <int, string> :: iterator it;
    
    scanf("%d", &casos);
    lap.clear();
    while(casos--){
    	
        scanf("%s %s", nombre, precio);
        
        for(int i = 0; i<strlen(precio); i++){
            
            if(precio[i] != '4' && precio[i] != '7')
                cont++, i=strlen(precio)+1;
            if(precio[i] == '4')
            	four++;
            if(precio[i] == '7')
            	seven++;
        
        }
        if(cont == 0 && seven == four)
            lap[atoi(precio)] = nombre;
            
        else cont = 0;
    }
        if(lap.size() != 0){
            for(it = lap.begin(); it!= lap.end(); it++){
                cout<<it->second<<"\n";
                break;
            }
        }
        else printf("-1\n");
    
    return 0;
}
