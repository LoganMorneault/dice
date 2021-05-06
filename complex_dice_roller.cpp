#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  cout << "Input formatted as NdN, with constants being Nd1\nWhat would you like to roll?" << endl;
  
  string line;

  getline(cin, line);
  stringstream ss(line); // we'll read from here

  vector<string> input_arr;

  // loads vector for input processing
  while (ss >> line) {
    input_arr.push_back(line);
  }

  int sum = 0;

  for (string s : input_arr) {
    // Get substring from start to "d"
    string first = s.substr(0, s.find("d"));

    // Get substring from "d" to end
    string second = s.substr(s.find("d") + 1, s.length());

    // convert both to integers
    int num = stoi(first);
    int die = stoi(second);

    // roll num dice with sides in [1:die]
    for (int idx = 0; idx < num; idx++) {
      int roll = rand() % die + 1;
      sum += roll;

      // Uncomment to play Yahtzee
      //cout << roll << endl;
    }
  }

  // Final sum
  cout << sum << endl;
  return 0;
}
