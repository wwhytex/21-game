#include <iostream>
#include <random>
using namespace std;


int GetRandom(int min, int max) {
    random_device seed;
    mt19937 gen(seed());
    uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}

int main(){
    auto randomcard1 = GetRandom(2, 10);
    auto randomcard2 = GetRandom(2, 10);
    int input;
    int playercard = randomcard1;
    int botcard = randomcard2;
    
    cout << "Bot cards " << botcard << endl;
    cout << "Your cards " << playercard << endl;
    cout << "More = 1 " << endl;
    cout << "Stop = 2 " << endl;
    cin >> input;

    while(true) {
        if (input == "1") {
            
        }


    }


}
