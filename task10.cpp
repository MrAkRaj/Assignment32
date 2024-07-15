#include <iostream>
#include <string>
using namespace std;

class Player {
    int playerNo;
    string name;
    int numMatches;
    int* goals;
    int* matches;

public:
    Player(int no, const string& n, int matches) : playerNo(no), name(n), numMatches(matches) {
        this->matches = new int[numMatches];
        this->goals = new int[numMatches];

        for (int i = 0; i < numMatches; ++i) {
            this->matches[i] = i + 1;
            cout << "Enter goals for match " << (i + 1) << ": ";
            cin >> this->goals[i];
        }
    }

    ~Player() {
        delete[] matches;
        delete[] goals;
    }

    void display() {
        cout << "Player No: " << playerNo << endl;
        cout << "Name: " << name << endl;
        for (int i = 0; i < numMatches; ++i) {
            cout << "Match " << matches[i] << ": " << goals[i] << " goals" << endl;
        }
    }
};

int main() {
    int no, matches;
    string name;

    cout << "Enter player number: ";
    cin >> no;
    cout << "Enter player name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter number of matches: ";
    cin >> matches;

    Player p(no, name, matches);  // Calls parameterized constructor
    p.display();

    return 0;
}
