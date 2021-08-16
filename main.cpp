#include <stdio.h>

void ReferenceTest(int &d);
void PoniterTest(int *e);

int main(void)
{
    int a[3] = {10};
    int &b = a[3]; // b为a的引用
    int *ptr = a; // ptr为指向a的指针
    ReferenceTest(b);
    ReferenceTest(a[3]);
    ReferenceTest(*ptr);
    PoniterTest(ptr);

    return 0;
}

void ReferenceTest(int &d)
{
    d++;
    return;
}

void PoniterTest(int *e)
{
    *e++;
    return;
}