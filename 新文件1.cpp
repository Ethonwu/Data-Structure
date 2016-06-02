#include<stdio.h>
#include<stdlib.h>
int num[100] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int tmp[100];
void merge(int left, int right)
{
    int i, j, k;
    printf("left=%d,right=%d\n",left,right);
    int mid = (left + right) / 2;
    printf("mid=%d\n",mid);
    for (k = 0, i = left, j = mid+1; i <= mid || j <= right; k++)
    {
        if (i > mid)
            tmp[k] = num[j++];
        else if (j > right)
            tmp[k] = num[i++];
        else if (num[i] < num[j])
            tmp[k] = num[i++];
        else
        {
            tmp[k] = num[j++];
            printf("tmp[k]=%d\n",tmp[k]);
            }
    }

    for (i = left, k = 0; i <= right; i++, k++)
        num[i] = tmp[k];
    for(k=0;k<i;k++)
      printf("num[k]=%d,",num[k]);
    printf("\n");
}


void mergeSort(int left, int right)
{
    int mid = (left + right) / 2;

    if (left < right)
    {
        mergeSort(left, mid);
        mergeSort(mid+1, right);
        merge(left, right);
    }
}

int main(void)
{
    mergeSort(0, 9);
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", num[i]);
        system("pause");
    return 0;
}

