#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    ifstream userFile("Data/Username.txt");
    if (userFile.is_open())
    {
        getline(userFile, username);
        userFile.close();
    }

    ifstream passFile("Data/Password.txt");
    if (passFile.is_open())
    {
        getline(passFile, password);
        passFile.close();
    }

    string usernameL;
    string passwordL;
    cout << "Username: ";
    getline(cin, usernameL);
    cout << "Password: ";
    getline(cin, passwordL);

    if (usernameL == username && passwordL == password)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
