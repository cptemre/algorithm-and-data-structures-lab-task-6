#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int input = 0;

    vector<int> myList;
    int counter = 0;

    cout << "Enter a positive number for your list.\n";
    cin >> input;

    do
    {
        myList.push_back(input);
        cout << "To stop giving inputs press 0.\nTo continue to input press any other number\n";
        cin >> input;
        counter++;
    } while (input != 0);

    counter--;
    int a = myList.at(0);
    int c = myList.at(counter) - myList.at(0);
    int d = 0;
    int e = 0;
    int counter2 = 0;
    int counter3 = 0;


    while (counter2 != counter + 1)
    {
        d += myList.at(counter2);
        counter2++;
    }

    cout << "Which list element would you like to see?\n";
    cin >> counter3;

    e = myList.at(counter3 - 1);

    cout << "a- Value of the first element of this array: " << a << endl;
    cout << "b- Content of the array: ";
    for (int i = 0; i < myList.size(); i++)
    {   
        if (i != myList.size() - 1)
        {
            cout << myList.at(i) << ", ";
        }
        else {
            cout << myList.at(i);
        }
    }
    cout << endl << "c- The difference between the last element and the first: " << c << endl;
    cout << "d- The sum of all elements in the array: " << d << endl;
    cout << "e- The element selected by the user: " << e << endl;
    return 0;
}