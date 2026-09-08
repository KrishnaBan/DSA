#include <iostream>
using namespace std;

int main()
{

    string ticketline[5];
    int front = 0, rear = -1, i;

    ticketline[++rear] = "kabir";
    ticketline[++rear] = "chanchal";
    ticketline[++rear] = "deepak";
    ticketline[++rear] = "tanisha";


    cout << "\nremove " << ticketline[front++];
    cout << "\nremove " << ticketline[front++];
   
    ticketline[++rear] = " sakshi";
    cout << "\n all person in a queue";
    for (i = front; i <= rear; i++)
    {
        cout << " " << ticketline[i];
    }
//     remove 3rd
    cout << "\nremove " << ticketline[front++];
}
