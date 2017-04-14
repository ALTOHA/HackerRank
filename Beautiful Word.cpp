#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    int tamano, i, cont=0;
    char jei[1000];
    scanf ("%s", jei);
    tamano=strlen(jei);    
        for (i=0; i<tamano; i++){
            if (jei[i]==jei[i+1])
                cont++;
            if ((jei[i]=='a' || jei[i]=='e' || jei[i]=='o'|| jei[i]=='i' || jei[i]=='u') && (jei[i+1]=='a' || jei[i+1]=='e' || jei[i+1]=='o'|| jei[i+1]=='i' || jei[i+1]=='u'))
                cont++;
        }
    (cont==0)?printf ("Yes\n") : printf("No\n");
    return 0;
}
