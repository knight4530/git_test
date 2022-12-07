#include <stdio.h>

static void add(int a, int b, int c){
    c = a + b;
    b = a + c;
}

int main(){
    add(1,2,3);
}