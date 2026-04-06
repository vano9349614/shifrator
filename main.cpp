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

    void showPasswords() 
    {
        ifstream file("vault.txt");
        string s, l, p;
        cout << "\n--- Твои сохраненные пароли ---\n";
        while (file >> s >> l >> p) {
            cout << "Сервис: " << crypt(s)
                 << " | Логин: " << crypt(l)
                 << " | Пароль: " << crypt(p) << endl;
        }
        file.close();
    }
};
int main() {
    setlocale(LC_ALL, "Russian");
    PasswordManager vault;
    int choice;
    string s, l, p;

    

    return 0;
}
