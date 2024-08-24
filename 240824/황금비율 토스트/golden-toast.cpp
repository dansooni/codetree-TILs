#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, m;
    string alphabets;
    char command, new_alphabet;
    list<char> breads;
    list<char>::iterator it;

    cin >> n >> m;
    cin >> alphabets;

    for(int i=0; i<alphabets.size(); i++) {
        breads.push_back(alphabets[i]);
    }

    it = breads.end();
    for(int i=0; i<m; i++) {
        cin >> command;

        if(command=='L') {
            if(it==breads.begin())
            {
                continue;
            }
            it--;
        }
        else if(command=='R') {
            if(it==breads.end())
            {
                continue;
            }
            it++;
        }
        else if(command=='D') {
            if(it==breads.end())
            {
                continue;
            }
            breads.erase(it);
            it--;
        }
        else if(command=='P') {
            cin >> new_alphabet;
            breads.insert(it, new_alphabet);
        }
    }

    for(it=breads.begin(); it!=breads.end(); it++) {
        cout << *it;
    }

    return 0;
}