#include <stdio.h>
#include <string.h>

// C/C++程序可以分成以下几个区
// 栈区(堆栈区实际上指的是栈区)
// 堆区
// 全局变量与静态变量区
// 文字常量区
// 代码区
// 关于堆栈讲解可以参考这篇文章：https://blog.csdn.net/yingms/article/details/53188974
int main(void)
{
    int length = 0;
    char *s = "jfoahfia"; // 指针s是指向的区域应该是文字常量区，不过s自己是在栈上
    char c[] = "jfoahfia"; // c指向的区域是栈区，c自己也在栈上
    length = sizeof("jfoahfia"); // 看来"sizeof"运算法是可以直接处理字符串，不过末尾的空终止字符'\0'也加上了
    printf("The result of \"sizeof(\"jfoahfia\")\" is %d\n", length);
    length = strlen("jfoahfia"); // 自动忽略了末尾的空终止字符
    printf("The result of \"strlen(\"jfoahfia\")\" is %d\n", length);

    length = sizeof(s);
    printf("The result of \"sizeof(s)\" is %d\n", length);
    length = strlen(s); // 自动忽略了末尾的空终止字符
    printf("The result of \"strlen(s)\" is %d\n", length);

    length = sizeof(c);
    printf("The result of \"sizeof(c)\" is %d\n", length);
    length = strlen(c); // 自动忽略了末尾的空终止字符
    printf("The result of \"strlen(c)\" is %d\n", length);

    return 0; 
}

// 应该在sizeof()眼中"jfoahfia"就是一个常量字符数组 {'j', 'f', ... , 'a', '\0'}，直接按照数组处理就行了