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
    public:
    void savePassword(string service, string login, string pass) 
    {
        ofstream file("vault.txt", ios::app);
        if (file.is_open()) {
            file << crypt(service) << " " << crypt(login)
                 << " " << crypt(pass) << endl;
            file.close();
            cout << "\n[OK] Данные зашифрованы и сохранены!\n";
        }
    }

    return 0;
}
