#include <bits/stdc++.h>

using namespace std;

int main(){
char op[3];

scanf("%s", op);

(op[1] == '+')? printf("%d\n", ((op[0]-'0')+(op[2]-'0'))) : printf("%d\n", ((op[0]-'0')-(op[2]-'0')));

return 0;
}

