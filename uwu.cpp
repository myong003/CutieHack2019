#include <iostream>
#include <fstream>

using namespace std;

void uwuify(string input){
    for (unsigned i = 0; i < input.size(); ++i){
        if (input[i] == 'l'){
            input[i] == 'w';
        }
        else if (input[i] == 'r'){
            input[i] = 'w';
        }
    }
    cout << input << endl;
}

int main(){
    cout << "Enter something:" << endl;
    string input;
    getline(cin, input);
    uwuify(input);
}