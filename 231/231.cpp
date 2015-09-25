#include <iostream>
#include <sstream>

using namespace std;

int main() {
  vector<string> cards;
  vector<string> sets;
  unsigned int set_count = 0;
  for(int i = 0; i < 12; i++) {
    cin >> cards[i]; 
  }
  for(int i = 0; i < 12; i++) {
    for(int j = i + 1; j < 12; j++) {
      for(int k = j + 1; k < 12; k++) {
        if(cards[i].at(0) == cards[j].at(0) &&
           cards[k].at(0) == cards[j].at(0) || 
	         cards[i].at(0) != cards[j].at(0) &&
           cards[k].at(0) != cards[j].at(0)) {
          if(cards[i].at(1) == cards[j].at(1) &&
             cards[k].at(1) == cards[j].at(1) || 
	           cards[i].at(1) != cards[j].at(1) &&
             cards[k].at(1) != cards[j].at(1)) {
            if(cards[i].at(2) == cards[j].at(2) &&
               cards[k].at(2) == cards[j].at(2) || 
	             cards[i].at(2) != cards[j].at(2) &&
               cards[k].at(2) != cards[j].at(2)) {
              sets[set_count] = cards[i] + " " + cards[j] + " " + cards[k];
              set_count++;
	          }
          }
	      }
      }
    }
  }
  for(int i = 0; i <= set_count; i++) {
    cout << sets[i] << endl; 
  }
}
