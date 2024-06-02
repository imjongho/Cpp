#ifndef BOOK_H
#define BOOK_H
#include "author.h"

// ���� ����(å�� �۰��� ������)
class Book {
private:
	string name;
	Author author;	// C. Book Ŭ������ 1���� Author ��ü�� �����Ѵ�.
	double price;
	int qtyInStock;	// D. Book Ŭ������ QtyInStock�� ���� �μ���.

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
