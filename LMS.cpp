#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

// Class for Book
class Book
{
private:
    int id;
    string title;
    string author;
    string genre;
    bool isAvailable;

public:
    // Constructor
    Book(int id, const string &title, const string &author, const string &genre) : id(id), title(title), author(author), genre(genre), isAvailable(true) {}

    // Getters and Setters
    int getId() const
    {
        return id;
    }

    string getTitle() const
    {
        return title;
    }

    string getAuthor() const
    {
        return author;
    }

    string getGenre() const
    {
        return genre;
    }

    bool getAvailability() const
    {
        return isAvailable;
    }

    void setAvailability(bool availability)
    {
        isAvailable = availability;
    }

    void updateDetails(const string &newTitle, const string &newAuthor, const string &newGenre)
    {
        title = newTitle;
        author = newAuthor;
        genre = newGenre;
    }
};

// Class for User
class User
{
protected:
    int id;
    string name;

public:
    User(int id, const string &name) : id(id), name(name) {}

    virtual void displayInfo() const = 0; // Pure virtual Function to make User an Abstract class
};

// Derived Class Member
class Member : public User
{
private:
    vector<int> borrowedBooks;

public:
    Member() : User(0, "") {}
    Member(int id, const string &name) : User(id, name) {}

    void borrowBook(int bookId)
    {
        borrowedBooks.push_back(bookId);
    }
    
    void returnBook(int bookId)
    {
        borrowedBooks.erase(remove(borrowedBooks.begin(), borrowedBooks.end(), bookId), borrowedBooks.end());
    }

    void viewBorrowedBooks() const
    {
        cout << "Borrowed Books: ";
        for (int bookId : borrowedBooks)
        {
            cout << bookId << " ";
        }
        cout << endl;
    }

    void displayInfo() const override
    {
        cout << "Member ID: " << id << ", Name: " << name << endl;
    }
};

// Derived Class Librarian
class Librarian : public User
{
public:
    Librarian() : User(0, "") {}
    Librarian(int id, const string &name) : User(id, name) {}

    void displayInfo() const override
    {
        cout << "Librarian ID: " << id << ", Name: " << name << endl;
    }

    void addBook(vector<Book> &inventory, int id, const string &title, const string &author, const string &genre)
    {
        Book newBook(id, title, author, genre);
        inventory.push_back(newBook);
    }

    void removeBook(vector<Book> &inventory, int id)
    {
        inventory.erase(remove_if(inventory.begin(), inventory.end(),
                                  [id](Book &book)
                                  { return book.getId() == id; }),
                        inventory.end());
    }

    void updateBook(vector<Book> &inventory, int id, const string &newTitle, const string &newAuthor, const string &newGenre)
    {
        for (Book &book : inventory)
        {
            if (book.getId() == id)
            {
                book.updateDetails(newTitle, newAuthor, newGenre);
                break;
            }
        }
    }
};

// Class for Library
class Library
{
private:
    vector<Book> inventory;
    unordered_map<int, Member> members;
    unordered_map<int, Librarian> librarians;

public:
    void addMember(int id, const string &name)
    {
        members[id] = Member(id, name);
    }

    void addLibrarian(int id, const string &name)
    {
        librarians[id] = Librarian(id, name);
    }

    Member &getMember(int id)
    {
        return members.at(id);
    }

    Librarian &getLibrarian(int id)
    {
        return librarians.at(id);
    }

    void searchBookByTitle(const string &title) const
    {
        for (const Book &book : inventory)
        {
            if (book.getTitle() == title)
            {
                cout << "Found Book ID: " << book.getId() << ", Title: " << book.getTitle() << endl;
                return;
            }
        }
        cout << "Book with title '" << title << "' not found." << endl;
    }

    void displayAvailableBooks() const
    {
        for (const Book &book : inventory)
        {
            if (book.getAvailability())
            {
                cout << "Book ID: " << book.getId() << ", Title: " << book.getTitle() << endl;
            }
        }
    }

    vector<Book> &getInventory()
    {
        return inventory;
    }
};

// Menu
void displayMenu()
{
    cout << "Library Management System" << endl;
    cout << "1. Add Member" << endl;
    cout << "2. Add Librarian" << endl;
    cout << "3. Add Book (Librarian)" << endl;
    cout << "4. Remove Book (Librarian)" << endl;
    cout << "5. Update Book (Librarian)" << endl;
    cout << "6. Borrow Book (Member)" << endl;
    cout << "7. Return Book (Member)" << endl;
    cout << "8. View Borrowed Books (Member)" << endl;
    cout << "9. Search Book by Title" << endl;
    cout << "10. Display Available Books" << endl;
    cout << "11. Exit" << endl;
    cout << "Enter your choice: ";
}

// Main Function
int main()
{
    Library library;
    int choice;
    do
    {
        displayMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int id;
            string name;
            cout << "Enter Member ID: ";
            cin >> id;
            cout << "Enter Member Name: ";
            cin.ignore();
            getline(cin, name);
            library.addMember(id, name);
            break;
        }
        case 2:
        {
            int id;
            string name;
            cout << "Enter Librarian ID: ";
            cin >> id;
            cout << "Enter Librarian Name: ";
            cin.ignore();
            getline(cin, name);
            library.addLibrarian(id, name);
            break;
        }
        case 3:
        {
            int librarianId;
            cout << "Enter Librarian ID: ";
            cin >> librarianId;
            try
            {
                Librarian &librarian = library.getLibrarian(librarianId);
                int bookId;
                string title, author, genre;
                cout << "Enter Book ID: ";
                cin >> bookId;
                cout << "Enter Book Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter Book Author: ";
                getline(cin, author);
                cout << "Enter Book Genre: ";
                getline(cin, genre);
                librarian.addBook(library.getInventory(), bookId, title, author, genre);
            }
            catch (const exception &e)
            {
                cout << e.what() << endl;
            }
            break;
        }
        case 4:
        {
            int librarianId;
            cout << "Enter Librarian ID: ";
            cin >> librarianId;
            try
            {
                Librarian &librarian = library.getLibrarian(librarianId);
                int bookId;
                cout << "Enter Book ID: ";
                cin >> bookId;
                librarian.removeBook(library.getInventory(), bookId);
            }
            catch (const exception &e)
            {
                cout << e.what() << endl;
            }
            break;
        }
        case 5:
        {
            int librarianId;
            cout << "Enter Librarian ID: ";
            cin >> librarianId;
            try
            {
                Librarian &librarian = library.getLibrarian(librarianId);
                int bookId;
                string newTitle, newAuthor, newGenre;
                cout << "Enter Book ID: ";
                cin >> bookId;
                cout << "Enter New Book Title: ";
                cin.ignore();
                getline(cin, newTitle);
                cout << "Enter New Book Author: ";
                getline(cin, newAuthor);
                cout << "Enter New Book Genre: ";
                getline(cin, newGenre);
                librarian.updateBook(library.getInventory(), bookId, newTitle, newAuthor, newGenre);
            }
            catch (const exception &e)
            {
                cout << e.what() << endl;
            }
            break;
        }
        case 6:
        {
            int memberId, bookId;
            cout << "Enter Member ID: ";
            cin >> memberId;
            cout << "Enter Book ID: ";
            cin >> bookId;
            try
            {
                Member &member = library.getMember(memberId);
                member.borrowBook(bookId);
            }
            catch (const exception &e)
            {
                cout << e.what() << endl;
            }
            break;
        }
        case 7:
        {
            int memberId, bookId;
            cout << "Enter Member ID: ";
            cin >> memberId;
            cout << "Enter Book ID: ";
            cin >> bookId;
            try
            {
                Member &member = library.getMember(memberId);
                member.returnBook(bookId);
            }
            catch (const exception &e)
            {
                cout << e.what() << endl;
            }
            break;
        }
        case 8:
        {
            int memberId;
            cout << "Enter Member ID: ";
            cin >> memberId;
            try
            {
                Member &member = library.getMember(memberId);
                member.viewBorrowedBooks();
            }
            catch (const exception &e)
            {
                cout << e.what() << endl;
            }
            break;
        }
        case 9:
        {
            string title;
            cout << "Enter Book Title: ";
            cin.ignore();
            getline(cin, title);
            library.searchBookByTitle(title);
            break;
        }
        case 10:
        {
            library.displayAvailableBooks();
            break;
        }
        case 11:
        {
            cout << "Exiting..." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    } while (choice != 11);

    return 0;
}
