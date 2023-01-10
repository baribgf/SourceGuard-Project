#include <iostream>
#include "../libs/rwlib.hpp"
#include "../libs/encdec.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    if (argc >= 4)
    {
        string action = argv[1];
        string path = argv[2];
        string out = argv[3];
        string under_action;

        if (action == "encrypt")
            under_action = encrypt(readFile(path));
        else if (action == "decrypt")
            under_action = decrypt(readFile(path));
        else
        {
            cout << "No valid action specified." << endl;
            return -1;
        }

        cout << "Writing file into " << out << endl;
        writeFile(out, under_action);
    }
    else
    {
        cout << "encrypt/decrypt tool for obfuscating source code.\n" << endl;
        cout << "command: encdec [action] [file-path] [outfile-path]\n" << endl;
        cout << "actions: - encrypt" << endl;
        cout << "         - decrypt" << endl;
    }

    return 0;
}
