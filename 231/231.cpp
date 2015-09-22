#include <iostream>
#include <sstream>

using namespace std;

int main() {
  vector<string> cards;
  vector<string> sets;
  for(int i = 0; i < 13; i++) {
    cin >> cards[i]; 
  }
  for(int i = 0; i < 12; i++) {
    for(int j = i + 1; j < 12; j++) {
      for(int k = j + 1; k < 12; k++) {
        if(cards[i].at(0) == cards[j].at(0) == cards[k].at(0) 
	   || cards[i].at(0) != cards[j].at(0) != cards[k].at(0)) {
           cout << "set matches";
	}
      }
    }
  }
}
