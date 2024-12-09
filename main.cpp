#include "table.hpp"
#include"choice.hpp"
#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int o;
        cout << endl;
        cout << "1.Periodic Table" << endl;
        cout << "2.Information about an element" << endl;
        cout << "3.Quiz on each element" << endl;
        cout << "If u want to terminate this,press 0." << endl
             << endl;
        cout << "Enter option:";
        cin >> o;

        if (o == 0)
        {
            break;
        }
        switch (o)
        {
        case 1:
            table();
            break;
        case 2:
        {
            int choice;
            printallEle();
            cout << "Enter number to know details about one element:" << endl;
            cin >> choice;
            infoAboutEle(choice);
            break;
        }
        case 3:
        {
            int s;

            cout << "ENTER ELEMENT'S ATOMIC NUMBER :";
            cin >> s;
            quize(s);
             break;
        }
        default:
              cout << "Wrong option" << endl;
    }
}
return 0;
}
