#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[10];
    int i;

    memset(a, 0, 4*10);
    for (i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
// void *memset( void *dest, int ch, size_t count ); memset()的函数原型
// 复制值 ch （如同以 (unsigned char)ch 转换到 unsigned char 后）到 dest 所指向对象的首 count 个字节。
// 若出现 dest 数组结尾后的访问则行为未定义。若 dest 为空指针则行为未定义。
//
// 其定义于头文件string.h，主要实现的是对字符串的操作。比如说该函数是用ch进行一个字节一个字节的填充，当我们是
// 整型数组时，每个元素占用4个字节，除了在0填充时，其他的填充字节都会乱码，而且进行0填充时字节数需要*4，因为count是填充的
// 字节数，而不是数组元素个数。