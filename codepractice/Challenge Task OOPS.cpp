#include <iostream>
using namespace std;

class book {
public:
	string title;
	string author;
	int year;
};

int main () {
book myobj1;
myobj1.title = "Jannat k pattay" ;
myobj1.author = "Nimra Ahmad" ;
myobj1.year = 1995 ;

book myobj2;
myobj2.title = "Peer e Kamil" ;
myobj2.author = "Umera Ahmad" ;
myobj2.year = 1998 ;

cout << myobj1.title << " " << myobj1.author << " " << myobj1.year << "\n" ;
cout << myobj2.title << " " << myobj2.author << " " << myobj2.year ;

return 0;
}