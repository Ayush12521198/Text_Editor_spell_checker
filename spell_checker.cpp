#include <iostream>
#include <vector>
#include "trie.h" // Assuming trie.h contains the Trie class definition

#define UNDERLINE_ON "\033[4m"
#define UNDERLINE_OFF "\033[0m"

int main() {
    Trie oTrie; // Create an instance of the Trie class
    std::vector<std::string> words = {"cat", "car", "cart", "bat", "bats"};

    // Insert words into the Trie
    for (const std::string& word : words) {
        oTrie.insertWord(word);
    }

    std::string s;

    // Loop to read characters until newline
    while (true) {
        char c = getchar();

        // Check for newline character
        if (c == '\n') {
            // Check if the last constructed word exists in the Trie and print it
            oTrie.searchWord(s) ? std::cout << s : std::cout << UNDERLINE_ON << s << UNDERLINE_OFF;
            std::cout << c;
            break; // Exit loop on newline
        } else if (c == ' ') {
            // Check if the constructed word exists in the Trie and print it
            oTrie.searchWord(s) ? std::cout << s : std::cout << UNDERLINE_ON << s << UNDERLINE_OFF;
            s = ""; // Clear the string for the next word
            std::cout << c;
        } else {
            // Append character to the current word
            s += c;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}
