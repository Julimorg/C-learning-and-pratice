#include<stdio.h>

int main() {
    char a, c;
    
    printf("Input any lowercase letter: ");
    scanf(" %c", &a);  // Note the space before %c to skip leading whitespace
    
    if (a >= 'a' && a <= 'z') {
        printf("Input keyword must be in lowercase.\n");
        return 1;
    }
    
    c = a;

   for(c = a; c <= 'Z' ; c++)
   {
   	printf("%c ",c);
   }
    
    return 0;
}

