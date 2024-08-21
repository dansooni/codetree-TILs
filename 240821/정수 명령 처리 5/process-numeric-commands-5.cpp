#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    vector<int> v;
    int action_time, value;
    char *command;

    scanf("%d", &action_time);
    for(int i=0; i<action_time; i++) {
        scanf("%s", command);
        if(strcmp(command, "push_back")==1) {
            scanf("%d", &value);
            v.push_back(value);
        }
        else if(strcmp(command, "pop_back")==1) {
            v.pop_back();
        }
        else if(strcmp(command, "size")==1) {
            printf("%d\n", v.size());
        }
        else if(strcmp(command, "get")==1) {
            scanf("%d", &value);
            printf("%d\n", v[value]);
        }
    }

    return 0;
}