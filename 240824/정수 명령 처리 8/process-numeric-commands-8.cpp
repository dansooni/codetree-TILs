#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    string command;
    int value, repeat_time;

    cin >> repeat_time;

    for(int i=0; i<repeat_time; i++) {
        cin >> command;

        if(command == "push_front") {
            cin >> value;
            l.push_front(value);
        }
        else if(command == "push_back") {
            cin >> value;
            l.push_back(value);
        }
        else if(command == "pop_front") {
            cout << l.front() << "\n";
            l.pop_front();
        }
        else if(command == "pop_back") {
            cout << l.back() << "\n";
            l.pop_back();
        }
        else if(command == "size") {
            cout << l.size() << "\n";
        }
        else if(command == "empty") {
            cout << l.empty() << "\n";
        }
        else if(command == "front") {
            cout << l.front() << "\n";
        }
        else if(command == "back") {
            cout << l.back() << "\n";
        }
    }

    return 0;
}