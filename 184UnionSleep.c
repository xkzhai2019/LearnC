#include <stdio.h>
// 不同平台下包含不同的头文件
#if _WIN32 // 识别windows平台
#include <windows.h>
#elif __linux__ //识别linux平台
#include <unistd.h>
#endif

int main(void){
    // 不同平台下调用不同的函数
    #if _WIN32
    Sleep(5000);
    #elif __linux__
    sleep(5);
    #endif

    printf("Hello, Window/Linux\n");
    return 0;
}
