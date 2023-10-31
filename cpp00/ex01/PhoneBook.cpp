#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::PhoneBook(int old, int size)
{
    this->old = 0;
    this->size = 0;
}

PhoneBook::~PhoneBook()
{
}

Contact PhoneBook::returnContactByIndex(int index)
{
    return this->contacts[index];
}

void PhoneBook::showContact(int index)
{
    Contact cont = returnContactByIndex(index);
    std::string fn = cont.getFirstname();
    std::string ln = cont.getLastname();
    std::string nn = cont.getNickname();
    
    std::cout << index << "|";
    for (int i = 0 ; i < 10 && i < fn.length() ; i++)
    {
        if (i == 9)
            std::cout << ".";
        else
            std::cout << fn[i];
    }
    std::cout << "|";
    for (int i = 0 ; i < 10 && i < ln.length() ; i++)
    {
        if (i == 9)
            std::cout << ".";
        else
            std::cout << ln[i];
    }
    std::cout << "|";
    for (int i = 0 ; i < 10 && i < nn.length() ; i++)
    {
        if (i == 9)
            std::cout << ".";
        else
            std::cout << nn[i];
    }
    std::cout << "\n";
}

void PhoneBook::SEARCH()
{
    int index;

    for (int i = 0 ; i < size ; i++)
        showContact(i);
    std::cout << "input index : ";
    std::cin >> index;
    if (index >= size)
    {
        std::cout << "index error\n";
        return;
    }
    return ;
}

void PhoneBook::ADD()
{
    
}