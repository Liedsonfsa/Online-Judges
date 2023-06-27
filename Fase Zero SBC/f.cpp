#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string dna;
  cin >> dna;

  string pro;
  cin >> pro;

  int casos;
  cin >> casos;

  for (int i = 0; i < casos; i++) {
    int a, b;
    cin >> a >> b;

    string substring = pro.substr(a - 1, b);
    int count = 0;
    size_t index = dna.find(substring);
    while (index != string::npos) {
      count++;
      index = dna.find(substring, index + 1);
    }
    cout << count << endl;
  }

  return 0;
}