#include <iostream>

using namespace std;

void backwards(char *);

int main() {
    char *word = "what";

    backwards(word);
    return 0;
}

void backwards(char *str){
    while(*str == '\0'){
        return;
    }

    backwards(str+1);
    cout << *str;
}

