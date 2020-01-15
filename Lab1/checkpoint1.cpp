/* 
 * * BINARY SEARCH IMPLEMENTATION * *
 *
 *   This implementation of the binary search algorithm
 *   specifically checks if an integer is contained within
 *   a basic array structure
 *
 */


#include <iostream>

int binSearch(int*, int, int);

int main(){

	int findme;
	int result;
	int secret[] = {0,1,5,8,16,27,60};

	// Figure out what the heck we're looking for!
	std::cout << "Enter a value to search for: ";
	std::cin  >> findme;
	getchar(); // Absorb enter press

	if(result = binSearch( secret, findme, sizeof(secret)/sizeof(secret[0])-1 ) )
		std::cout << findme << " found at index " << result << "!\n";
	else
		std::cout << findme << " is not contained within the list!\n";


	// Pause run until we're ready to exit (by ENTER key)
	getchar();
	return 0;
}


int binSearch(int* searchArray, int lookup, int max){
 int min = 0;
 int mid;

 while(min <= max){

	// Find the current midpoint in search range
	mid = (min+((max-min))/2);
	

	// Check if the value we want is higher or lower than
	// current midpoint, assign new midpoint based on result
	// of this check
	if( lookup > searchArray[mid] ) 
		min = mid + 1;
	else if( lookup < searchArray[mid] ) 
		max = mid - 1;


	// If the value we're looking for is neither higher nor lower
	// it must be equal, return the current midpoint (index of search criteria)
	else 
		return mid;
}


 // Will return zero if while loop terminates
 // before returning found value
 return 0;

}
