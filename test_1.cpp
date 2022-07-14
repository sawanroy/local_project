#include <iostream>
#include <vector>
#include <exception>
using namespace std;
class BadLengthException{
    public:
    int x;
    BadLengthException(int n) {
        x=n;
    }
    int what() const throw(){return x;}
};
bool validation(string u_name) {
    bool isValid = true;
    int n = u_name.length();
    if(n < 5) {
        throw BadLengthException(n);
    }
    for(int i = 0; i < n-1; i++) {
        if(u_name[i] == 'w' && u_name[i+1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
}
int main() {
    vector<string> unames = {"amit", "to", "paul_tim", "greg_harry", "towwer"};
    for(int i = 0; i < unames.size(); i++){
        string u_name = unames[i];
        try {
            bool isValid = validation(u_name);
            if(isValid) {
                cout << "Valid" << '\n';
            } else {
                cout << "Invalid" << '\n';
            }
        } catch (BadLengthException e) {
            cout << "Too short: " << e.what() << '\n';
        }
    }
}