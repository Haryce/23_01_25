#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "введите строку: ";
    getline(cin, input);
    string res;
    int sp = 0;
    bool ww = false;
    for (char x : input) {
        if (x != ' ') {
            res += x; 
            inWord = true; 
        } else {
            if (ww) {
                res += ' '; 
                ww = false; 
            }
            sp++; 
        }
    }
    if (!res.empty() && res.back() == ' ') {
        res.pop_back();
    }
    cout << "измененние в строке: " << res << endl;
    cout << "количество удаленных пробелов: " << sp << endl;
    return 0;
}
