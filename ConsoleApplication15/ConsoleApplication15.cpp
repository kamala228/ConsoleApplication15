#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

//int main() {
//    string s;
//    cout << "Введіть рядок: ";
//    getline(cin, s);
//
//    for (char& c : s) {
//        if (c == ' ') c = '\t';
//    }
//
//    cout << "Результат: " << s << endl;
//    return 0;
//}


//int main() {
//    string s;
//    cout << "Введіть рядок: ";
//    getline(cin, s);
//
//    int letters = 0, digits = 0, others = 0;
//
//    for (char c : s) {
//        if (isalpha(c)) letters++;
//        else if (isdigit(c)) digits++;
//        else others++;
//    }
//
//    cout << "Літери: " << letters << ", Цифри: " << digits << ", Інші символи: " << others << endl;
//    return 0;
//}


//int main() {
//    string s;
//    cout << "Введіть речення: ";
//    getline(cin, s);
//
//    stringstream ss(s);
//    string word;
//    int count = 0;
//
//    while (ss >> word) count++;
//
//    cout << "Кількість слів: " << count << endl;
//    return 0;
//}


//int main() {
//    string s, filtered;
//    cout << "Введіть рядок: ";
//    getline(cin, s);
//
//    for (char c : s) {
//        if (!isspace(c)) filtered += tolower(c);
//    }
//
//    string reversed = filtered;
//    reverse(reversed.begin(), reversed.end());
//
//    if (filtered == reversed)
//        cout << "Рядок є паліндромом" << endl;
//    else
//        cout << "Рядок не є паліндромом" << endl;
//
//    return 0;
//}


//int main() {
//    string s;
//    cout << "Введіть рядок: ";
//    getline(cin, s);
//
//    for (char& c : s) {
//        if (c == '.') c = '!';
//    }
//
//    cout << "Результат: " << s << endl;
//    return 0;
//}