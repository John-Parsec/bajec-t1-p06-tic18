#include <iostream>

using namespace std;

int main(void){
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin  >> ch1;
    cout << "Digite um caractere: ";
    cin  >> ch2;

    ch3 = ch1 -1;
    cout << "Anteccessor de " << ch1 << "(" << (int)ch1<<  ")" <<": ";
    cout << "(dec)" << (int)ch3  << " | (oct)" << oct << (int)ch3 << " | (hex)" << hex << (int)ch3;
    cout << dec << endl;


    ch3 = ch2 -1;
    printf("Anteccessor de %c(%d): (dec)%d | (oct)%o | (hex)%X\n", ch2, ch2, ch3, ch3, ch3);

    // e
    ch3 = isupper(ch1)? 'A' : ' ';
    cout << "ch1 = " << ch1 <<" | ch3 = " << ch3 << endl;

    // f
    ch3 = islower(ch2)? 'a' : ' ';
    cout << "ch2 = " << ch2 <<" | ch3 = " << ch3 << endl;

    // g
    ch3 = (isdigit(ch2) || isdigit(ch1))? '1' : ' ';
    cout << "ch1 = " << ch1 <<" | ch2 = " << ch2 << " | ch3 = " << ch3 << endl ;

    
    return 0;
}