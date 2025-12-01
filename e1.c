#include <stdio.h>

int main(void){
    char * nam = strdup("Mi nombre");
    puts(nam);
    free(nam);
    return 0;
}