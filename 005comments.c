#include <stdio.h>
// 测试C语言中的标识符大小写
int main(void){
    float score = 1.0f; // 使用小写字母开头定义浮点数
    float Score = 2.0f; // 使用大写字母开头定义浮点数
                        // 多个单行注释即可实现多行注释
	// 打印输出变量值
    printf("score = %.1f,Score = %.1f\n",score,Score);
	// 单行注释支持嵌套 // 嵌套注释也会被编译器忽略
	return 0;
}
