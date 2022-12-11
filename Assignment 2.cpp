// Get 20 Number in Array
// Delete one Specific Number
// Delete all Numbers of Array
// Find and Replace One Number
// Find and Replace All Numbers

#include <iostream>
using namespace std;

class OOP
{
private:
    int Arr[20];
    int counter;

public:
    OOP()
    {
        counter = 0;
    }

    // Get 20 Numbers in Array

    void getNum(int N)
    {
        if (counter >= 20)
        {
            return;
        }
        else
        {
            Arr[counter] = N;
            counter++;
        }
    }

    // View Numbers in Array

    void viewNum(void)
    {
        int i;
        for (i = 0; i < counter; i++)
        {
            cout << Arr[i] << ", ";
        }
    }

    // Delete One number from Array

    void deleteNum(int N)
    {
        for (int i = N - 1; i < counter; i++)
        {
            Arr[i] = Arr[i + 1];
        }
        counter--;
    }

    // Delete All Numbers of Array

    void deleteAllNums(int delNum)
    {
        for (int i = 0; i < counter; i++)
        {
            if (Arr[i] == delNum)
            {
                for (int j = i; j < (counter - 1); j++)
                {
                    Arr[j] = Arr[j + 1];
                }
                i--;
                counter--;
            }
        }

        cout << "\nNumber Deleted Successfully" << endl;
    }

    // Find and Replace Single Number

    void replaceNum(int num, int numWith)
    {
        int i;
        for (i = 0; i < counter; i++)
        {
            if (i == num)
            {
                Arr[i] = numWith;
            }
        }
    }

    // Find and Replace All Number

    void replaceAllNum(int num1, int num2)
    {
        int i;
        for (i = 0; i < counter; i++)
        {
            if (Arr[i] == num1)
            {
                Arr[i] = num2;
            }
        }
    }
};

int main()
{
    OOP Obj;
    int num, a, b, opt = 1;

    while (opt != 0)
    {
        cout << "\nPress 1 to Get Numbers." << endl;
        cout << "Press 2 to View Numbers." << endl;
        cout << "Press 3 to Delete One Number." << endl;
        cout << "Press 4 to Delete All Numbers." << endl;
        cout << "Press 5 to Replace Numbers." << endl;
        cout << "Press 6 to Replace All Numbers." << endl;
        cout << "Press 0 to Exit." << endl;
        cout << "\nEnter Your Choice: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            for (int i = 0; i < 20; i++)
            {
                cout << "\nEnter a Number: ";
                cin >> num;
                Obj.getNum(num);
            }
            break;

        case 2:
            cout << "\nThe Numbers are: ";
            Obj.viewNum();
            break;

        case 3:
            cout << "\nEnter the Position of the Number Your want to Delete: ";
            cin >> a;
            Obj.deleteNum(a);
            break;

        case 4:
            cout << "\nEnter the Number You Want to Delete: ";
            cin >> a;
            Obj.deleteAllNums(a);
            break;

        case 5:
            cout << "\nEnter Number to Replace: ";
            cin >> a;
            cout << "\nEnter Number to Replace With: ";
            cin >> b;
            Obj.replaceNum(a, b);
            break;

        case 6:
            cout << "\nEnter Number to Replace: ";
            cin >> a;
            cout << "\nEnter Number to Replace With: ";
            cin >> b;
            Obj.replaceAllNum(a, b);
            break;
        }
    }

    return 0;
}