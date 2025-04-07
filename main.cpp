#include "notes.h"

int main() {

//    note
//  initiliizer list didnt work, so i just pushback each article

    std::vector<std::string> articles1;
    articles1.push_back("a");
    if (canCreateNote("a", articles1) != true) std::cout << "false" << std::endl;

    std::vector<std::string> articles2;
    articles2.push_back("ab");
    if (canCreateNote("a", articles2) != true) std::cout << "false" << std::endl;


    std::vector<std::string> articles3;
    articles3.push_back("a");
    articles3.push_back("b");
    if (canCreateNote("a",articles3) != true) std::cout << "false" << std::endl;



    std::vector<std::string> articles4;
    articles4.push_back("a");
    articles4.push_back("b");
    articles4.push_back("c");
    if (canCreateNote("abc",articles4) != true) std::cout << "false" << std::endl;


    return 0;
}