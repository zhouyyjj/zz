/*【例9-2】指针取地址运算和间接访问运算示例。*/

/*  取地址运算和使用指针访问变量 */
# include <stdio.h>
int main (void)
{
    int a = 3, *p;            	
    p = &a;                 
    printf ("a=%d, *p=%d\n", a, *p);	
    *p = 10;                 	
    printf("a=%d, *p=%d\n", a, *p);
    printf("Enter a: ");
    scanf("%d", &a);        	
    printf("a=%d, *p=%d\n", a, *p);
    (*p)++;					
    printf("a=%d, *p=%d\n", a, *p);

    return 0;
}
