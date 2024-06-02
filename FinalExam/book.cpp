#include "book.h"

// 생성자
Book::Book(string n, Author a, double p, int q /*= 0*/) 
    : name(n), author(a), price(p), qtyInStock(q) {
    if (q < 0 || p < 0.0) {
        cout << "출판 부수, 가격: 음수 불가" << endl;
        assert(false);
    }
}


// getter
string Book::getName() {
    return name;
}

Author Book::getAuthor() {
    return author;
}

double Book::getPrice() {
    return price;
}

int Book::getQtyInStock() {
    return qtyInStock;
}

string Book::getAuthorName() {
    return author.getName();
}


// setter
void Book::setPrice(double price) {
    if (price < 0.0) {
        cout << "가격: 음수 불가" << endl;
        assert(false);
    }
    else {
        this->price = price;
    }
}

void Book::setQtyInStock(int qtyInStock) {
    if (qtyInStock < 0) {
        cout << "출판 부수: 음수 불가" << endl;
        assert(false);
    }
    else {
        this->qtyInStock = qtyInStock;
    }
}


// 출력
void Book::print() {
    cout << "'" << name << "' by ";
    author.print();
}