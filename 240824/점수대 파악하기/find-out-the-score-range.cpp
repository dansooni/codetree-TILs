#include <iostream>
using namespace std;

int main() {
    int count[11] = {0, };
    int score;

    while(1) {
        cin >> score;

        if(score == 0) {
            break;
        }

        count[score/10] += 1;
    }
    
    for(int i=10; i>0; i--) {
        cout << i << "0 - " << count[i] << "\n";
    }

    return 0;
}