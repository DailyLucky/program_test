#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void BubbleSort(int a[], int a_len); 
void SelectionSort(int a[], int a_len);
void InsertSort(int a[], int a_len);

int nums[10] = {3,6,89,0,-45,7,23,9,1456,1}; // 随便初始化的一组值
int main(void) {
    // 非递减排序(从小到大)
    
    int i;
    InsertSort(nums, sizeof(nums)/sizeof(nums[0]));
    for (i=0; i<10; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

void BubbleSort(int a[], int a_len) {
    int i;
    int j;
    int temp = 0;

    for (i=0; i<a_len-1; i++) {
        for (j=0; j<a_len-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }  
    return;  
}

void SelectionSort(int a[], int a_len) {
    // 这应该是我平时用的最多排序算法了，感觉最简单直观
    int i;
    int j;
    int min = 0;
    int min_index = 0;

    for (i=0; i<a_len; i++) {
        min = a[i];
        min_index = i;
        for (j=i; j<a_len; j++) {
            if (min > a[j]) {
                min = a[j];
                min_index = j;
            }
        }
        a[min_index] = a[i];
        a[i] = min;
    }
    return;
}

void InsertSort(int a[], int a_len) {
    int i;
    int current = 0;
    int pre = 0;

    for (i=0; i<a_len; i++) {
        current = a[i];
        pre = i - 1;
        while (pre>=0 && a[pre]>current) {
            a[pre+1] = a[pre]; // 后移一位
            pre--;
        }
        a[pre+1] = current;
    }
    return;
}