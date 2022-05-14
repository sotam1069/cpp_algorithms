#include <vector>
#include <iostream>

using namespace std;

void insertionSort(vector<int> &numbers){
    for(int i=0; i < numbers.size(); ++i){
        int j = i;

        while((j>0) && (numbers[j] < numbers[j-1])){
            int temp = numbers[j];
            numbers[j] = numbers[j-1];
            numbers[j-1] = temp;

            j--;
        }
    }
}

int main(){

    vector<int> numbers {3,4,1,8,6,9};

    cout << insertionSort(numbers) << endl;

    return 0;
}