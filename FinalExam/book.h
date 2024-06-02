#ifndef BOOK_H
#define BOOK_H
#include "author.h"

// 소유 관계(책이 작가를 소유함)
class Book {
private:
	string name;
	Author author;	// C. Book 클래스는 1개의 Author 객체를 포함한다.
	double price;
	int qtyInStock;	// D. Book 클래스의 QtyInStock은 출판 부수임.

public:
	Book(string name, Author author, double price, int qtyInStock = 0);
	string getName();
	Author getAuthor();
	double getPrice();
	void setPrice(double price);
	int getQtyInStock();
	void setQtyInStock(int qtyInStock);
	void print(); 
	string getAuthorName();
};
#endif
