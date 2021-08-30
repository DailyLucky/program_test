#include <stdio.h>

static int j;

void fun1(void) {
    static int i = 0;
    i++;
    return;
}

void fun2(void) {
    j = 0; 
    j++;
    return;
}

int main(void) {
    int k;

    for (k=0; k<10; k++) {
        fun1();
        fun2();
    }
    return 0;
}
