#include <bits/stdc++.h>

using namespace std;
vector<string> split_sentence(string sen) {

  stringstream ss(sen);

  string word;

  vector<string> words;

  while (ss >> word) {
    words.push_back(word);
  }

  return words;
}
int main() { 
  string s;
  getline(cin, s);
  std::vector<std::string> words = split_sentence(s);

  char first = words[0][0];
  for (string w  : words) {
    if (w[0] != first) {
      cout << "N\n";
      return 0;
    }
  }
  cout << "Y\n";
}
