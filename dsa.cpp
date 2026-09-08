#include <iostream>
using namespace std;

int main()
{

    string ticketline[5];
    int front = 0, rear = -1, i;

    ticketline[++rear] = "krishna";
    ticketline[++rear] = "TANISH";
    ticketline[++rear] = "tanmay";

    // display ticket

    for (i = front; i <= rear; i++)
    {
        cout << "\n"
             << ticketline[i];
    }

    // remove first person

    cout << "\n remove" << ticketline[front++];
    cout << "\n remove" << ticketline[front++];

    // add new person
    ticketline[++rear] = "deepak";
    cout << "\n new member ";
    cout << ticketline[i];
    cout << "\n all person in a queue ";
    for (i = front; i <= rear; i++)
    {
        cout << " " << ticketline[i];
    }
}