#include <stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int *ptr1=(int *)(&a+1); // 明白了。a可以理解为指向一维数组的指针，那么&a就是指向一位数组的指针的指针，
                             // 所以&a+1 = &a(a的地址值) + 4(int类型占的字节数) * 5(a指向的数组的元素个数)
    int *ptr2=(int *)((int)a+1);

    printf("%x,%x",ptr1[-1],*ptr2);
    return 0;
}