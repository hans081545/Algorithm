//
//  main.cpp
//  MergeSort
//
//  Created by Kyungmin Han on 2017. 9. 11..
//  Copyright © 2017년 han. All rights reserved.
//

#include <iostream>
using namespace std;

int tempArr[10];
void mergeTwoArea(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

int main(int argc, const char * argv[]) {
    
    int arr[10];
    int max;
    
    cout << "입력할 숫자의 개수를 입력해주세요.(1~10) : ";
    cin >> max;
    
    for (int i=0; i<max; i++) {
        cout << i << " : ";
        cin >> arr[i];
    }
    
    if (max > 1) {
        mergeSort(arr, 0, max-1);
    }
    
    cout << "result : ";
    for (int i=0; i<max; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

void mergeSort(int arr[], int left, int right) {
    int mid;
    
    if (left < right) {
        mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        mergeTwoArea(arr, left, mid, right);
    }
    
}

void mergeTwoArea(int arr[], int left, int mid, int right) {
    
    int idx1 = left;
    int idx2 = mid+1;
    int idxtmp = left;
    
    while (idx1 <= mid && idx2 <= right ) {
        if (arr[idx1] < arr[idx2])
            tempArr[idxtmp++] = arr[idx1++];
        else
            tempArr[idxtmp++] = arr[idx2++];
    }
    
    if (idx1 <= mid) {
        while (idx1 <= mid) {
            tempArr[idxtmp++] = arr[idx1++];
        }
    } else {
        while(idx2 <= right) {
            tempArr[idxtmp++] = arr[idx2++];
        }
    }
    
    for (idxtmp=left; idxtmp<=right; idxtmp++) {
        arr[idxtmp] = tempArr[idxtmp];
    }
}
