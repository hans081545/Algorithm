//
//  main.cpp
//  insertionSort
//
//  Created by Kyungmin Han on 2017. 9. 9..
//  Copyright © 2017년 han. All rights reserved.
//

#include <iostream>
using namespace std;

void insertionSort(int insertArr[], int max);

int main(int argc, const char * argv[]) {
    
    int arr[10];
    int max=0;
    cout << "입력할 숫자의 개수를 입력해 주세요. (1~10)";
    cin >> max;
    
    for (int i=0; i<max; i++) {
        cout << i+1 << " : ";
        cin >> arr[i];
    }
    
    cout << "insert number : ";
    for (int i=0; i<max; i++) {
        cout << arr[i] << " ";
    }
    insertionSort(arr, max);
    return 0;
}

void insertionSort(int insertArr[], int max) {
    int temp;
    
    for (int i=1; i<max; i++) {
        temp = insertArr[i];
        for (int j=i-1; j>-2; j--) {
            if (j == -1) {
                insertArr[j+1] = temp;
                break;
            }
            
            if (temp < insertArr[j]) {
                insertArr[j+1] = insertArr[j];
            } else {
                insertArr[j+1] = temp;
                break;
            }
        }
        
        cout << "\n round " << i-1 << " : ";
        for (int j=0; j<max; j++)
            cout << " " << insertArr[j] << " ";
    }
}
