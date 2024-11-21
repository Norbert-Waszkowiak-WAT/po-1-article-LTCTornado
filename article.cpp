#include <iostream>
#include <string>
#include "author.cpp"

class Article{
private:
    string title;
    Author author;
    int publicationYear;
    string journal;

public:
    Article(){};
    Article(string title, Author author, int publicationYear, string journal): title(title), author(author), publicationYear(publicationYear), journal(journal){};
    Article(Article &other): title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){};
    void displayInfo(){
        cout << title;
        cout << author.getName();
        cout << author.getSurname();
        cout << publicationYear;
        cout << journal;
    }
    string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    } 
    int getPublicationYear(){
        return publicationYear;
    }
    string getJournal(){
        return journal;
    }




};