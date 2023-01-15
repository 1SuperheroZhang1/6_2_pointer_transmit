#include <stdio.h>
/*
 * 6.2 指针传递使用场景
 *   指针的使用场景通常只有两个，即传递与偏移
 *   Ⅰ、指针的传递
 *
 * */
//在子函数内去改变主函数中某个变量的值
//void change(int j){ //j是形参
//    j=5;
//}
//int main() {
//    int i=10;
//    printf("before change i=%d\n",i);
//    change(i);//C语言的函数调用是值传递，实参赋值给形参,j=i
//    printf("after change i=%d\n",i);
//    return 0;
//}

//在子函数内去改变主函数中某个变量的值 - 使用指针
void change(int *j){ //j是指针变量，内部存储的是变量i的地址
    *j=5; //间接访问得到变量i
}
//指针的传递
int main() {
    int i=10;
    printf("before change i=%d\n",i);
    change(&i);//C语言的函数调用是值传递，实参赋值给形参,j=&i  传递变量i的地址
    printf("after change i=%d\n",i);
    return 0;
}