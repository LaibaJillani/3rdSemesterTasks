#include <iostream>
using namespace std;

int main(){
char ch, str[200] = "GeeksforGeeks";
int i = 0, val;

cout << "\nCharacter\tASCII Value\n";

while(str[i]){

    ch = str[i];
    val = ch;
    cout << ch << "\t\t\t" << val << "\n";
    i++;
}
return 0;
}
