#include <iostream>
#include <vector>

using namespace std;

bool rlinear_search(vector<int> numbers, int n){
	int size = vector.size()

	if(size == 0){
		return false;
	}
	if(numbers[size] == n){
		return true;
	}
	else{
		rlinear_search(numbers,size-1, n);
	}
	
}

int main(){

	vector<int> test = {2,3,4,20,10,42};

	int n = 20;

	if(rlinear_search(test,n)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

}
