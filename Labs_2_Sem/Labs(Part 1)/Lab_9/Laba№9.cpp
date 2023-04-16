#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>
#include <sstream>

int main() {
    std::ifstream in("f1.txt");
    std::ofstream out("f2.txt");
    std::string line;
    std::string lastLine;
    while (std::getline(in, line)) {
        std::unordered_set<std::string> words;
        std::istringstream iss(line);
        std::string word;
        bool hasRepeatingWords = false;
        while (iss >> word) {
            if (words.count(word) > 0) {
                hasRepeatingWords = true;
                break;
            }
            else {
                words.insert(word);
            }
        }
        if (hasRepeatingWords) {
            out << line << std::endl;
            lastLine = line;
        }
    }
    in.close();
    out.close();
    int vowelCount = 0;
    for (char c : lastLine) {
        if (std::string("aeiouAEIOU").find(c) != std::string::npos) {
            vowelCount++;
        }
    }
    std::cout << "The last line in f2 has " << vowelCount << " vowels." << std::endl;
    return 0;
}