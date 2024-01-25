/* Na razie klasy zaznaczać będziemy keywordem 'struct'.
 * Jego działanie różni się nieco od 'class', ale o tym przy obiektach */

// Nazwy klas - jako ważnych elementów - zaznaczane będą PascalCase'em
struct Book
{
    // Tu należy umieszczać pola klasy
    std::string title, author, ISBN;
    unsigned int numOfPages, stockAmount;
    float price;
    bool isPaperback;
};
// Pamiętaj o średniku
