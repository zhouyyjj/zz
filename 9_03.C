/*【例9-3】通过使用指针操作改变所指变量的值的程序示例。*/

/*  通过指针操作改变变量的值 */
# include <stdio.h>
int main (void)
{
    int a = 1, b = 2, t;
    int *p1, *p2;
   	
    p1 = &a; p2 = &b;       	  
    printf ("a=%d, b=%d, *p1=%d, *p2=%d\n", a, b, *p1, *p2);
    t = *p1; *p1 = *p2; * p2 = t; 
    printf ("a=%d, b=%d, *p1=%d, *p2=%d\n", a, b, *p1, *p2);

    return 0;
}
