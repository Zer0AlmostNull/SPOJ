#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string modifyText(const string& text) {
    string modifiedText;
    bool capitalizeNext = true;

    for (char c : text) {
        if (isspace(c)) {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                modifiedText += toupper(c);
                capitalizeNext = false;
            } else {
                modifiedText += c;
            }
        }
    }

    return modifiedText;
}

int main() {
    string inputText;

    while (getline(cin, inputText)) {
        string outputText = modifyText(inputText);
        cout << outputText << endl;
    }

    return 0;
}
