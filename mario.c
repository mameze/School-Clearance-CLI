#include <stdio.h>
int main (){
    int x[] = {10,20,30};
     int *p = &x[1];

        char *fruits[3] =  {"bananas","melons","apples"};

        printf("I have %d %s\n", *p, fruits[2] );

}
