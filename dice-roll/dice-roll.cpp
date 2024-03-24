#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>
#include <unordered_map>


using namespace std;
priority_queue <int> q;
unordered_map<int,int>m;
// Function to roll a dice
int rollDice() {
    return (rand() % 365) + 1; // Generates a random number between 1 and 6
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Roll the dice
    for (int i = 0; i < 10; i++)
    {
        q.push(rollDice());
    }



    for (int i = 0; i < 5; i++)
    {
        q.pop();
    }

    while (!q.empty())
    {
        cout << q.top();
        q.pop();
    }




    while (m[1] == 2) {
        cout << m.first();
        return
    }


    while (true) {
        int date = rollDice();
        m[date]++;
        if (m[date] == 2 && 365 - date < 183) {
            cout << date;
            return 0; // Returning 0 as the program executed successfully
        }
    }
    
    return 0;



}
