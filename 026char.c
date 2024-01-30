int main(void){
    // 合法的字符型数据
    char a = '1';
    char b = '@';
    char c = 'c';
    char d = ' '; // 空格也是一个字符
    
    // 非法的字符型数据
    char x = '中'; // char类型无法涵盖ASCII编码之外的字符
    char y = "t"; // 字符数据应由单引号''包围

    return 0;
}
