#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class PasswordManager 
{
private:
    string crypt(string data) {
        for(int i = 0; i < data.length(); i++)
            data[i] ^= 2;
        return data;
    }


    return 0;
}
