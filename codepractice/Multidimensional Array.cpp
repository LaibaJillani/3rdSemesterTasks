#include <iostream>
using namespace std;

int main () {
	bool ships[4][4] = {
	{ 0 , 1 , 0 , 0 } ,
	{ 0 , 1 , 1 , 0	} ,
	{ 0 , 0 , 0 , 0	} ,
	{ 1 , 0 , 0 , 0	} 
	} ;
	int hits = 0 ;
	int numberofturns = 0 ;
	
	while (hits < 4) {
		int row , coloumn ;
		
		cout << "Selecting Coordinates: \n" ;
		
		cout << "Choose a row b\\w 0 and 3: ";
		cin >> row;
		
		cout << "Choose a coloumn b\\w 0 and 3: ";
		cin >> coloumn;
		
		if (ships[row][coloumn]) {
			ships[row][coloumn] = 0;
			hits++;
			cout << "Hit! " << (4 - hits) << " Left. \n\n";
		} else
		 {
		cout << "Miss. \n\n" ;
		 } 
		 numberofturns++;
	} ;
	cout << "Victory! \n" ;
	cout << "You won in " << numberofturns << " Number of turns. " ;
	return 0;
}
