/*����9-5����ָ�������ʼ����ʾ������*/

/*  ָ������ĳ�ʼ�� */
# include <stdio.h>
int main (void)
{
    int a=1, b=2;
    int *p1 = &a, *p2 = &b, *pt;  	

    printf ("a=%d, b=%d, *p1=%d, *p2=%d\n", a, b, *p1, *p2);
    pt = p1;         		
    p1 = p2;
    p2 = pt;
    printf ("a=%d, b=%d, *p1=%d, *p2=%d\n", a, b, *p1, *p2);

    return 0;
}
