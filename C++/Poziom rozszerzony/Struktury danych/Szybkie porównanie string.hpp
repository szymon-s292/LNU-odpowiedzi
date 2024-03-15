// Umieść strukturę i funkcje 'gdzieś tutaj'

// Oczekiwane funkcjonalnoci klasy powinny nas nakierować zaimplementowanie
// FastStr jako 'obiekt', a nie 'struktura danych', ale nie mamy jeszcze do
// tego narzędzi :/
// Może kiedyś zrobimy to 'naprawdę ładnie'...
#pragma once
#include <string>

class FastStr {
public:
    static const int BASE = 26;
    static const int MOD = 100;

    int alfaOrd(char c) {
        return c - 'a' + 1;
    }

    uint64_t hash(const std::string& s) {
        uint64_t result = 0;

        for (char c : s) {
            result = (result * BASE + alfaOrd(c)) % MOD;
        }
        
        return result;
    }

    std::string text;
    uint64_t hashValue;

    bool operator==(const FastStr& other) const {
        return hashValue == other.hashValue && text == other.text;
    }
};

void changeStr(FastStr& fastStr, const std::string& newText) {
    fastStr = FastStr();
    fastStr.text = newText;
    fastStr.hashValue = fastStr.hash(newText);
}
