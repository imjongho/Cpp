#include "book.h"

int main(void) {
    // 累啊 按眉 积己
    Author WS("Woongsoo", "wsna@Kongju.ac.kr", 'u');
    WS.print();

    // 氓 按眉 积己
    Book WS_Book("Kongju University", WS, 20);
    WS_Book.setQtyInStock(88);
    WS_Book.print();

    cout << WS_Book.getQtyInStock() << endl;
    cout << WS_Book.getPrice() << endl;
    cout << WS_Book.getName() << endl;
    cout << WS_Book.getAuthor().getName() << endl;
    cout << WS_Book.getAuthor().getEmail() << endl;
    cout << WS_Book.getAuthorName() << endl;

    return 0;
}