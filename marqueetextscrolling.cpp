#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000*(x))
#endif
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
string displaytext = "Now Playing: Pixo - Rhodes Bolts        ";

int main() {
    while (true){
        cout << displaytext + "\n";
        sleep(1);
        displaytext = displaytext.substr(1) + displaytext[0];
    }
    return 0;
}
