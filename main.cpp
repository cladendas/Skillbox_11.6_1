#include <iostream>

void encrypt_caesar(std::string text, int num) {
    std::string encryptText;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {

        }
        encryptText += text[i] + 10;
    }

    std::cout << "1encryptText: " << encryptText << std::endl;
    std::cout << "2encryptText: " << ('R' - 'A' + 10) % 26 + 'A' << std::endl;
    std::cout << (char) 66;
}

void decrypt_caesar(std::string text, int num) {

}

int main() {
    std::string text = "abracadabra";


    int num = 10;
    std::cout << "Enter text and num: " << std::endl;
//    std::getline(std::cin, text);
//    std::cin >> num;
    encrypt_caesar(text, num);

//    std::cout << text << std::endl;
    return 0;
}
