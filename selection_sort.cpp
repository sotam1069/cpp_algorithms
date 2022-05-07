#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void selection(vector<int> &numbers){
	int min_indx;
	for(int i=0; i < numbers.size(); ++i){
		min_indx = i;

		for(int j=i; j < numbers.size(); ++j){
			if(numbers[j] < numbers[min_indx]){
				min_indx = j;
			}
		}

		int temp = numbers[i];
		numbers[i] = numbers[min_indx];
		numbers[min_indx] = temp;
	}

}

int main(){


	vector<int> test = {8,2,1,4,6,7,9,12};

	selection(test);

	cout << test << endl;
	
	return 0;

}



