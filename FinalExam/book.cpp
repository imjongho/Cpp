#include "book.h"

// ������
Book::Book(string n, Author a, double p, int q /*= 0*/) 
    : name(n), author(a), price(p), qtyInStock(q) {
    if (q < 0 || p < 0.0) {
        cout << "���� �μ�, ����: ���� �Ұ�" << endl;
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
        cout << "����: ���� �Ұ�" << endl;
        assert(false);
    }
    else {
        this->price = price;
    }
}

void Book::setQtyInStock(int qtyInStock) {
    if (qtyInStock < 0) {
        cout << "���� �μ�: ���� �Ұ�" << endl;
        assert(false);
    }
    else {
        this->qtyInStock = qtyInStock;
    }
}


// ���
void Book::print() {
    cout << "'" << name << "' by ";
    author.print();
}