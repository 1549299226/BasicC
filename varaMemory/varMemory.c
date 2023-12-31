#include <stdio.h>

//函数的作用域和生命周期
//代码规范：全局变量必须以g（global）开头
//全局变量是定义在全局外部，作用域是整个程序（进程）退出（结束）才失效
int g_num =10 ;
//全局变量是定义在函数外部，生命周期同全局变量，存在全局区
static int g_vara =20;

int main()
{   
    //只要变量定义在函数内部就是局部变量 作用域：离开函数失效

    int localVara = 5;
    //代码规范：在栈空间开辟的内存不得超过8M，如果超过8M，会发生栈溢出（stack overflow）
    //优先级队列： 
    //时间和空间：时间体现出的是代码快效率高，空间体现的是内存的大小

    return 0;
}