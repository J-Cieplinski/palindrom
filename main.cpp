#include <iostream>
#include <algorithm>

bool isPalindrome(const std::string& text)
{
    std::string reverseText = text;
    std::reverse(reverseText.begin(), reverseText.end());
    return (text==reverseText);
}

int main()
{
    std::cout << "ala: " << isPalindrome("ala");
    std::cout << "\nkot: " << isPalindrome("kot");
    std::cout << "\nneveroddoreven: " << isPalindrome("neveroddoreven") << "\n";
}