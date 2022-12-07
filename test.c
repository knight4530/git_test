#include <stdio.h>

static void add(int a, int b, int c){
    b = a + b + b + c;
    b = a + c + a + c + b;
    c = a + b;
}

int main(){
    add(1,2,3);
}