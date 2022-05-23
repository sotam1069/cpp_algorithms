#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> left, vector<int> right, vector<int> &result) {

    int i=0;
    int j=0;
    int k=0;
    while ((i<left.size()) && (j<right.size())) {
        if (left[i] < right[j]) {
            result[k] = left[i];
            i++;
        } else {
            result[k] = right[j];
            j++;
        }
        k++;
    }
    while (i<left.size()) {
        result[k] = left[i];
        i++; k++;
    }
    while (j<right.size()) {
        result[k] = right[j];
        j++; k++;
    }

}

void mergeSort(vector<int> &numbers) {

    if (numbers.size() <=1) return;
    int mid = numbers.size() / 2;
    vector<int> leftHalf;
    for (int i = 0; i<mid; i++) {
        leftHalf.push_back(numbers[i]);
    }
    mergeSort(leftHalf);
    vector<int> rightHalf;
    for (int i=mid; i<numbers.size(); i++) {
        rightHalf.push_back(numbers[i]);
    }
    mergeSort(rightHalf);
    merge(leftHalf, rightHalf, numbers);

}