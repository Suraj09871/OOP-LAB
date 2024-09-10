#include<iostream>
using namespace std;
class Book {
private:
    int bookId;
    int pages;
    double price;
public:
    void setBookId(int id) {
        bookId = id;}
    void setPages(int p) {
        pages = p;}
    void setPrice(double pr) {
        price = pr;}
    int getBookId() {
        return bookId;}
    int getPages() {
        return pages;}
    double getPrice() {
        return price;}
    void showBookDetails() {
        cout << "Book ID: " << bookId << endl;
        cout << "Number of Pages: " << pages << endl;
        cout << "Price: $" << price << endl;}
};
int main() {
    //create two objects of class Book
    Book* book1 = new Book();
    Book* book2 = new Book();
    //data members for book1
    book1->setBookId(303);
    book1->setPages(375);
    book1->setPrice(10.99);
    //data members for book2
    book2->setBookId(105);
    book2->setPages(550);
    book2->setPrice(15.99);
    //Book details
    cout << "Book 1 Details:" << endl;
    book1->showBookDetails();
    cout << endl;
    cout << "Book 2 Details:" << endl;
    book2->showBookDetails();
    cout << endl;
    // Compare prices
    if (book1->getPrice() > book2->getPrice()) {
        cout << "The costlier book is Book 1 with a price of $" << book1->getPrice() << endl;
    } else {
        cout << "The costlier book is Book 2 with a price of $" << book2->getPrice() << endl;
    }
    delete book1;
    delete book2;
    return 0;
}