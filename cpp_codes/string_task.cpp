#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s, res;
    std::cin >> s;
    for (char c : s) {
        c = tolower(c);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            res += '.';
            res += c;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
