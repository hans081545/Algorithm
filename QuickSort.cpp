//
//  main.cpp
//  QuickSort
//
//  Created by Kyungmin Han on 2017. 9. 13..
//  Copyright © 2017년 han. All rights reserved.
//

#include <iostream>
using namespace std;
int maxx = 5;

void quickSort(int arr[], int start, int end);

int main(int argc, const char * argv[]) {
    int max;
    int arr[10];
    
    cout << "입력할 숫자의 개수를 적어주세요(1~10): ";
    cin >> max;
    
    for (int i=0; i<max; i++) {
        cout << "num " << i+1 << " : ";
        cin >> arr[i];
    }
    
    quickSort(arr, 0, max-1);
    
    cout << "result : ";
    for (int i=0; i<max; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

void quickSort(int arr[], int start, int end) {
    
    int pivot = start;
    int left = pivot;
    int right = start+1;
    int temp;
    
    if (start < end) {
        for (; right<=end; right++) {
            if (arr[right] < arr[pivot]) {
                left++;
                temp = arr[right];
                arr[right] = arr[left];
                arr[left] = temp;
            }
        }
        
        temp = arr[start];
        arr[start] = arr[left];
        arr[left] = temp;
        pivot = left;
        
        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot+1, end);
    }
}
