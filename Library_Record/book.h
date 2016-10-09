//regulation
//@Baron,AllRightsReserved

#include<string>

class book{
public:
	book();
	book(string bookTittle, string bookAuthor, string creditDate);
	getBookTittle() const;
	getBookAuthor() const;
	getCreditDate() const;
private:
	string tittle;
	string author;
	string date;
};
