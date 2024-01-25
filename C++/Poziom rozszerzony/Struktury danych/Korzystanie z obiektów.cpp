#include "Book.hpp"
#include "Customer.hpp"
// Bierzemy referencje na obiekty, bo pozwoli to nam je modyfikować
bool buyBook(Customer& customer, Book& book)
{
    if(book.stockAmount > 0 && customer.balance >= book.price)
    {
        book.stockAmount--;
        customer.balance -= book.price;
        return 1;
    }
    else
    {
        return 0;
    }
}
