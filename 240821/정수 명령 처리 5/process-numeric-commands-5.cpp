#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    vector<int> v;
    int action_time, value;
    char *command;

    cin >> action_time;
    for(int i=0; i<action_time; i++) {
        cin >> command;
        if(strcmp(command, "push_back")==0) {
            cin >> value;
            v.push_back(value);
        }
        else if(strcmp(command, "pop_back")==0) {
            v.pop_back();
        }
        else if(strcmp(command, "size")==0) {
            cout << v.size() << "\n";
        }
        else if(strcmp(command, "get")==0) {
            cin >> value;
            cout << v[value] << "\n";
        }
    }

    return 0;
}