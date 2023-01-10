#include <iostream>
#include "../libs/rwlib.hpp"
#include "../libs/exec.hpp"
#include "../libs/encdec.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        string base = argv[1];
        string path = argv[2];
        execScript(base, decrypt(readFile(path)));
    }
    else
    {
        cout << "Welcome to SourceGuard . . !" << endl;
        cout << "Command: launcher [base-command] [file-path]" << endl;
    }
    return 0;
}
