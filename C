#include <stdio.h>

int main() {
    char password[20] = {0};

    printf("请输入密码:>");
    scanf("%s", password);
    printf("请确认密码(Y/N):>");
    
    //清理缓冲区中的内容
    int tmp = 0;
    while ((tmp = getchar()) != '\n') {}
    
    int ch = getchar();
    if (ch == 'Y')
        printf("输入成功");
    else
        printf("输入失败");

    return 0;
}

