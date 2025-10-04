#include <iostream>
#include <cstring>
using namespace std;

int length_string(char name[]) {
    int length = 0;
    int i = 0;
    while (name[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

void reverseArray(char name[]) {
    int i = 0;
    int n = length_string(name);
    int l = n - 1;
    while (i <= l) {
        swap(name[i], name[l]);
        i++;
        l--;
    }
}

void Spacecount(char sentence[]) {
    int n = length_string(sentence);
    for (int i = 0; i < n; i++) {
        if (sentence[i] == ' ') {
            sentence[i] = '@';
        }
    }
}

int main() {
    char name[100];

    cout << "Enter name: ";
    cin.getline(name, 100);   // yaha se sentence bhi input hoga

    cout << "Length is : " << length_string(name) << endl;

    // predefined function
    cout << "Length using strlen : " << strlen(name) << endl;

    cout << "Initially array is : " << name << endl;

    reverseArray(name);
    cout << "After reversing : " << name << endl;

    Spacecount(name);
    cout << "Sentence With @ symbol : " << name << endl;

    return 0;
}
