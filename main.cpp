#include <iostream>
#include <string>

using namespace std;

class Program {
public:
    string encrypt(const string& str, const string& kk) {
        int key[kk.length()];
        for (int i = 0; i < kk.length(); i++) {
            key[i] = (int)(kk[i] % 48);
        }

        int j = 0;
        string msg = "";
        for (int i = 0; i < str.length(); i++) {
            if (j == kk.length()) { j = 0; }
            char ch = (char)(str[i] + key[j]);
            msg += ch;
            j++;
        }
        return msg;
    }

    string decrypt(const string& str, const string& kk) {
        int key[kk.length()];
        for (int i = 0; i < kk.length(); i++) {
            key[i] = (int)(kk[i] % 48);
        }

        int j = 0;
        string msg = "";
        for (int i = 0; i < str.length(); i++) {
            if (j == kk.length()) { j = 0; }
            char ch = (char)(str[i] - key[j]);
            msg += ch;
            j++;
        }
        return msg;
    }
};

int main() {
    Program p;
    while (true) {
        cout << "1. Encrypt message" << endl;
        cout << "2. Decrypt message" << endl;
        cout << "3. clear screen" << endl;
        cout << "0. exit" << endl;
        cout << ">:";

        int s;
        cin >> s;

        if (s == 1) {
            string k, str;
            cout << "Enter key: ";
            cin >> k;
            cout << "Enter message to encrypt: ";
            cin.ignore();
            getline(cin, str);
            cout << "Encrypted Message: ";
            cout << "\033[1;31m" << p.encrypt(str, k) << "\033[0m" << endl;
            cout << endl;
        } else if (s == 2) {
            string k, str;
            cout << "Enter key: ";
            cin >> k;
            cout << "Enter message to decrypt: ";
            cin.ignore();
            getline(cin, str);
            cout << "Decrypted Message: ";
            cout << "\033[1;32m" << p.decrypt(str, k) << "\033[0m" << endl;
            cout << endl;
        } else if (s == 0) {
            break;
        } else if (s == 3) {
            system("cls");
        } else {
            cout << "Wrong input" << endl;
        }
    }

    return 0;
}
