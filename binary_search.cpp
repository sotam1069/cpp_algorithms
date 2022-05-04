#include <iostream>
#include <vector>

using namespace std;

int binarySearchHelper(vector<int> numbers, int key, int start, int end){

	if(start > end) return -1;
	if(start == end) {
		if(numbers[start] == key){
			return start;
		} else {
			return -1;
		}
	}
	int mid = (start + end) / 2;

	if(numbers[mid] == key) return mid;
	if (numbers[mid] < key) return binarySearchHelper(numbers, key, mid+1, end);
	return binarySearchHelper(numbers,key, start, mid-1);

}

int binarySearch(vector<int> numbers, int key){
	return binarySearchHelper(numbers,key,0, numbers.size()-1);

}

