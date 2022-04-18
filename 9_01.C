/*【例9-1】利用指针模拟寻找保险箱密码的故事。*/

/*  获取密码的两种方法 */
#include <stdio.h>
int main(void)
{
    int key=911;       /* 变量key存放密码 */
    int *addr=NULL;    /* 变量addr存放地址 */

    addr=&key;        /*将key的地址赋给addr */

    /* 通过key变量名输出密码值*/
    printf("The key is: %d\n", key);   
    /* 通过key变量地址来输出密码值 */
    printf("If I know the address of the key, I also can get it: %d\n", *addr);

    return 0;
}

