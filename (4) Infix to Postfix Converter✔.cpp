// Reverse polish notation
// https://www.codewars.com/kata/52e864d1ffb6ac25db00017f/train/cpp

#include <iostream>
#include <string>
#include <stack>


using namespace std;

int  priority(const char a) {
    switch (a) {
    case '+': return 1;
    case '-': return 1;
    case '*': return 2;
    case '/': return 2;
    case '(': return 4;
    case '^': return 3;
    default: return 0;
    }
}

string to_postfix(string infix) {
  cout << infix << endl;
    setlocale(LC_ALL, "ru");
    stack<char> stek;
    string postfix = "";
    for (const char c : infix) {
        if (isdigit(c)) {
            postfix += c;
        }
        else {
            if (stek.empty()) {
                cout << "Добавление " << c << " в стек\n";
                stek.push(c);
            }
            else if (c == ')') {
                while (stek.top() != '(') {
                    postfix += stek.top();
                    stek.pop();
                }
                stek.pop();
            }
            else if (priority(c) > priority(stek.top())) {
                cout << "У " << c << " приоритет выше, чем у " << stek.top() << endl;
                stek.push(c);
            }
            else if (priority(c) <= priority(stek.top())) {
                cout << "У " << c << " приоритет ниже, чем у " << stek.top() << endl;
                if (stek.top() != '(') {
                    postfix += stek.top();
                    stek.pop();
                   // cout << stek.top() << endl;
                  if (!stek.empty())
                    if (priority(c) == priority(stek.top())) {
                        postfix += stek.top();
                        stek.pop();
                    }
                }
                cout << postfix << endl;
                stek.push(c);
                cout << "Верх стека " << stek.top() << endl;
            }
        }
    }
    while (!stek.empty()) {
        postfix += stek.top();
        stek.pop();
    }
    return postfix;
}
