#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string data;
    Node *next;
};
class playlist
{
public:
    Node *head;
    playlist()
    {
        head = NULL;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
    void show_Menu()
    {
        cout << "Main Menu \n";
        cout << "------------------\n";
        cout << "1. Insert \n";
        cout << "2. Delete \n";
        cout << "3. Search \n";
        cout << "4. Update \n";
        cout << "5. Display \n";
        cout << "6. Exit\n";
        cout << "------------------\n";
        cout << "Enter your choice: ";
    }

    void search_Song(string song)
    {
        Node *temp = head;
        if (isEmpty())
        {
            cout << "playlist is Empty!!\n";
        }
        else
        {
            while (temp != NULL && temp->data != song)
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {
                cout << "song is not availble in your playlist!!\n";
            }
            else
            {
                cout << "song is available---> " << song << "\n";
            }
        }
    }
};

// lessa 2el main function

int main(){

}
