// 随机数生成测试

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;
    int a[10] = {0};

    srand(time(NULL)); // srand()的函数原型 ==》void srand(unsigned int _Seed); 
    for (i=0; i<10; i++) {
        a[i] = rand() % 10;
    }
    for (i=0; i<10; i++) {
        fprintf(stdout, "%-4d", a[i]); // 现学现卖。由于是打印到stdout，故此时等价于printf("%-4d", a[i]);
    }
    printf("\n");
    return 0;
}
//-------------------------------没有加入srand()函数----------------------------------------------
// 连打三遍都是这个结果，说明是伪随机，每一次重新启动该程序得到的结果是一样的
// E:\Programming\C\CWorkspace\Test\EncodeTest\build>"E:\Programming\C\CWorkspace\Test\EncodeTest\build\main.exe"
// 1   7   4   0   9   4   8   8   2   4

// E:\Programming\C\CWorkspace\Test\EncodeTest\build>"E:\Programming\C\CWorkspace\Test\EncodeTest\build\main.exe"
// 1   7   4   0   9   4   8   8   2   4

// E:\Programming\C\CWorkspace\Test\EncodeTest\build>"E:\Programming\C\CWorkspace\Test\EncodeTest\build\main.exe"
// 1   7   4   0   9   4   8   8   2   4
//-----------------------------------------------------------------------------

//-------------------------------加入srand()函数----------------------------------------------
// 连打三遍结果有变化。因为我们srand(time(NULL))，每一次启动该应用程序时抛出的随机数种子不一样。
// E:\Programming\C\CWorkspace\Test\EncodeTest\build>"E:\Programming\C\CWorkspace\Test\EncodeTest\build\main.exe"
// 7   8   3   6   1   4   3   1   8   8

// E:\Programming\C\CWorkspace\Test\EncodeTest\build>"E:\Programming\C\CWorkspace\Test\EncodeTest\build\main.exe"
// 3   4   8   9   5   0   5   5   0   7

// E:\Programming\C\CWorkspace\Test\EncodeTest\build>"E:\Programming\C\CWorkspace\Test\EncodeTest\build\main.exe"
// 0   1   8   9   7   3   0   0   6   9
//-----------------------------------------------------------------------------
// 要了解更多内容可以去看看我在CSDN中收藏的那几篇博客，写的不错。