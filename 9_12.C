/*
【例9-12】使用数组名作为函数参数求数组元素的累加和。
*/

/*  使用指针计算数组元素之和 */
#include <stdio.h>
int main(void)
{
    int i, a[10], *p;
    long s = 0;
    int sum (int a[ ], int n);

    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
    s = sum (a, 10);
    printf("sum=%ld \n", s);

    return 0;
}    

int sum (int a[ ], int n)
{ 
    int  i, s = 0;

    for ( i = 0; i < n; ++i )
	s += a[i];

    return s;
}

