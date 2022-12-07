#include <stdio.h>

static void add(int a, int b, int c){
    b = a + b + b + c;
    c = a + b;
}

int main(){
    add(1,2,3);
}