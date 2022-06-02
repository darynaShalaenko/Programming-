#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int num(const string& s, char symb) {
    int count = 0;
    stringstream ss;
    ss << s;
    while (ss.good()) {
        string word;
        ss >> word;
        if (ss.fail())
            break;
        if (word.back() == symb)
            count++;
    }
    return count;
}

void create(string* arr, int n, const string& s, char symb) {
    int count = -1;
    stringstream ss;
    ss << s;
    while (ss.good()) {

        string word;
        ss >> word;
        if (ss.fail())
            break;
        if (word.back() == symb) {
            count++;
            *(arr + count) = word;
        }
    }
}

void print(string* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    char symb = 'a';
    string s = "daryna mark julia    viktor    aaaaaa  a anna";
    int n = num(s, symb);
    //cout<<n<<endl;
    string* arr = new string[n];
    create(arr, n, s, symb);
    print(arr, n);
    return 0;
}