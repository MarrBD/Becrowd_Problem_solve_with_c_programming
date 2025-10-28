#include <iostream>
#include <string>
#include <algorithm> // For transform function

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To consume the newline character after reading t

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

        // Convert the string to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
