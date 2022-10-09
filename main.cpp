#include <iostream>

//получение зашифрованного символа
char getSymbol(char sym, char startSym, int step, int sizeABC) {
    int tmp = (sym - startSym + step) % sizeABC + startSym;
    bool pos = tmp < startSym;
    return pos ? tmp + sizeABC : tmp;
}

//шифрование
//получает текст для зашифровки text, шаг step, размер алфавита sizeABC
std::string encrypt_caesar(std::string text, int step, int sizeABC) {
    std::string encryptText;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 32) {
            encryptText += " ";
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            encryptText += getSymbol(text[i], 'A', step, sizeABC);
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            encryptText += getSymbol(text[i], 'a', step, sizeABC);
        } else {
            encryptText += text[i];
        }
    }
    return encryptText;
}

//засшифровка
std::string decrypt_caesar(std::string text, int step, int sizeABC) {
    return encrypt_caesar(text, -step, sizeABC);
}

int main() {
    //исходный текст
    std::string text = "The quick brown fox jumps over the lazy dog";
    int step = 0;
    //размер алфавита
    int sizeABC = 26;

    std::cout << "Enter text and num: " << std::endl;
    std::getline(std::cin, text);
    std::cin >> step;

    std::cout << "encrypt text: " << encrypt_caesar(text, step, sizeABC) << std::endl;
    std::cout << "decrypt text: " << decrypt_caesar(text, step, sizeABC) << std::endl;

    return 0;
}
