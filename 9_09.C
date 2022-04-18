/*
【例9-9】输入n个正整数，将它们从小到大排序后输出。要求使用冒泡排序算法。
*/

/*  指针和数组及存储单元 - 冒泡排序算法 */
#include <stdio.h>
void swap2 (int *, int *);
void bubble (int a[], int n);
int main(void)
{    
    int n, a[8];
    int i;

    printf("Enter n (n<=8): ");
    scanf("%d", &n);
    printf("Enter a[%d] : ",n);
    for (i=0; i<n;i++)
        scanf("%d",&a[i]);
    bubble(a,n);

    printf("After sorted, a[%d] = ", n);
    for (i=0; i<n; i++)
        printf("%3d",a[i]);

    return 0;
}

void bubble (int a[], int n)  		
    int  i, j;

    for( i = 1; i < n; i++)		
        for (j = 0; j < n-i; j++ )	
            if (a[j] > a[j+1])		
                swap2 (&a[j], &a[j+1]);	
}

void swap2 (int *px, int *py)
{
    int t;

    t = *px; 
    *px = *py; 
    *py = t;
}
