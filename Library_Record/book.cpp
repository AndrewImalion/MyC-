//realize book.h
//@Baron,AllRightsReserved

#include"book.h"
#include<iostream>

using namespace std;

book::newBook(){
	tittle = "unknown";
	author = "unknown";
	date = "unknown";
};

book::newBook(string bookTittle, string bookAuthor, string creditDate){
	tittle = bookTittle;
	author = bookAuthor;
	date = creditDate;
};

string book::getBookTittle() const{
	return tittle;
};

string book::getBookAuthor() const{
	return author;
};

string book::getBookTittleCreditDate() const{
	return date;
};