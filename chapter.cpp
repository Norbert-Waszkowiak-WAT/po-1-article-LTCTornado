#include <iostream>
#include <string>
#include "article.cpp"

using namespace std;

class Chapter{
private:
    string title;
    Author author;
    int chapterNumber = 1;

public:
    Chapter(){};
    Chapter(string title, Author author, int chapterNumber): title(title), author(author), chapterNumber(chapterNumber)  {};
    Chapter(Chapter const &other): title(other.title), author(other.author), chapterNumber(other.chapterNumber)  {};
    Chapter(Article &article): title(article.getTitle()), author(article.getAuthor()){};

    void displayInfo(){
        cout << "Chapter " << chapterNumber << ": ";
        cout << title << " by ";
        cout << author.getName() << " ";
        cout << author.getSurname() << endl;
        
    }

    string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getChapterNumber(){
        return chapterNumber;
    }


};