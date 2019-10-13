#include <iostream> 
using namespace std;

int sum(int* nums, int size);
int* odds(int* nums, int size);
double getAverage(int arr[], int size);


int main() {
	// array of numbers to have operations performed on it
	int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int nums_size = sizeof(nums); // should divide by sizeof(int) to get number of elements in array

	// getting array of odds
	int * o = odds(nums, nums_size);
	

	// getting sum of the array 
	int s = sum(nums, nums_size);
	cout << s << endl;

	// average value of the numbers in nums
	double average = getAverage(nums, nums_size);
	cout << average << endl;
}


// takes an array and a size as input and returns the sum of the elements
int sum(int* nums, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(nums + i);
	}
	return sum;
}

/*
 takes an array of numbers and it's size and returns an array of the same size
 but with only the odd numbers in the original array. The rest of the values in the
 new array are 0's
*/
int* odds(int* nums, int size) {
	static int odds[10]; // this is the thing giving me grief
	int j = 0;
	for (int i = 0; i < size; i++){
		if ( *(nums + i) / 2 ) { // Should be % not /
			odds[j] = *(nums + j); // should be *(nums + i) not *(nums + j)
			j++;
		}
	}
	return odds;

}

/*
  Takes an array of numbers and it's size and returns the average 
  of the numbers inside the array
*/
double getAverage(int* nums, int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += nums[i];
   }
   avg = double(sum) / size;

   return avg;
}



