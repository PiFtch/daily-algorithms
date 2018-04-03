/* description from CLRS p578-579
NAIVE-STRING-MATCHER(T, P)
  n = T.length
  m = P.length
  for s = 0 to n - m
    if P[1..m] == T[s+1..s+m]
      print "Pattern occurs with shifts"
*/

#include <iostream>
#include <cstring>
using namespace std;
int NaiveStringMatcher(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    for (int s = 0; s <= n-m; s++){
        bool match = false;
        for (int i = 0; i < m; i++)
            if (text[s+i] == pattern[i])
                match = true;
            else {
                match = false;
                break;
            }
        if (match)
            return s;
    }
    return -1;
}

int main() {
    char text[] = "abcdefg";
    char pattern[] = "cde";
    cout << strlen(text) << endl;
    cout << NaiveStringMatcher(text, pattern) << endl;
    return 0;
}
