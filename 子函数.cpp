#include <stdio.h>

// 选择排序函数定义
void selectionSort(int arr[], int n) //
{
    int i, j, min_idx;
    // 一个一个地遍历数组
    for (i = 0; i < n-1; i++) {
        // 找到arr[i]之后的最小值的索引
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        // 交换找到的最小值和arr[i]
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}



//插入排序
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // 将arr[0..i-1]中所有大于key的元素向后移动一位
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// 冒泡排序函数定义
void bubbleSort(int arr[], int n) 
{
    int i, j;
    for (i = 0; i < n-1; i++) {
        // 最后i个元素已经是有序的
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // 交换arr[j]和arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 二分查找函数定义
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // 检查中间元素是否是目标值
        if (arr[mid] == target) {
            return mid;
        }

        // 如果目标值大于中间元素，则在右半部分查找
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // 如果目标值小于中间元素，则在左半部分查找
        else {
            right = mid - 1;
        }
    }

    // 如果没有找到目标值，返回-1
    return -1;
}















