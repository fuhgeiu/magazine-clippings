#include <iostream>
#include <vector>
#include <unordered_map>
#include <cctype>
#include <string>


bool canCreateNote(const std::string& note, const std::vector<std::string>& articles) {

    std::unordered_map<char, int> magazineCount;            // hash map (character,frequency)

    for (const std::string& article : articles) {       // iterate over strings in articles

        for (char c : article) {                  // iterate over each article

            if (c != ' ') {
                magazineCount[tolower(c)]++;       // insert char to the hashmap and increment frequency
            }
        }
    }

    for (char c : note) {                           // iterate over note
        if (c != ' ') {

            char lowerChar = tolower(c);

            if (magazineCount[lowerChar] > 0) {

                magazineCount[lowerChar]--;         // decremant if char is used
            } else {
                return false;
            }
        }
    }

    return true;                        // loop will fail when char frequncy is not enough form hashmap
}


