#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int> numbers,int n){

	for(int i=0; i < numbers.size(); ++i){

		if(numbers[i] == n){ return i; }
	}
	return -1;
}

int main(){


	vector<int> x = {2,3,4,10,20,40};
	int num = 20;

	int result = linear_search(x,num);
	if(result == -1){cout << "Element is not present in the vector";}

	return 0;
}
