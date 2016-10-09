//regulation
//@Baron,AllRightsReserved

#include<string>

class book{
public:
	newBook();
	newBook(string bookTittle, string bookAuthor, string creditDate);
	getBookTittle() const;
	getBookAuthor() const;
	getCreditDate() const;
private:
	string tittle;
	string author;
	string date;
};