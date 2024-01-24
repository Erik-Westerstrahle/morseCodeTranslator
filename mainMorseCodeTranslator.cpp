#include <iostream>
#include <string>
#include <unordered_map>


class MainMorseCodeTranslator {
private:
    std::unordered_map<char, std::string> morseCodeMap;


public:
MainMorseCodeTranslator(){
        // Initialize the Morse code map
        morseCodeMap = {
            {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
            {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
            {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
            {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
            {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
            {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
            {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
            {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {' ', " "}
        };
}

        std::string translateToMorse(const std::string& text) {
            std::string morse ="";
            for(char c : text) {
                c =toupper(c);// Convert to uppercase for consistent mapping

                if(morseCodeMap.find(c) != morseCodeMap.end())
                {
                    morse += morseCodeMap[c] + " ";

                }
                else{
                    morse += "? ";
                }
            }
            return morse;
        }
};

int main() {
    MainMorseCodeTranslator translator;
    std::string text;

    std::cout << "Enter text to translate to Morse Code: ";
    std::getline(std::cin, text);

    std::string morseCode = translator.translateToMorse(text);
    std::cout << "Morse Code: " << morseCode << std::endl;

    return 0;
}


