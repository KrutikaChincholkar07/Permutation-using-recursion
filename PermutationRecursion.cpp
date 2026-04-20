#include <iostream>
#include <string>
using namespace std;

// Function to swap characters
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

// Recursive permutation function
void permute(string str, int l, int r)
{
    if (l == r)
        cout << str << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);        // Swap
            permute(str, l + 1, r);      // Recursive call
            swap(str[l], str[i]);        // Backtrack
        }
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Permutations are:\n";
    permute(str, 0, str.length() - 1);

    return 0;
}
