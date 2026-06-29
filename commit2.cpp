#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    for (int i = 0; i < 30000000; i++) {
        ofstream file("commit.txt", ios::app);
        file << "Commit " << i << "\n";
        file.close();

        system("git add .");

        string cmd = "git commit -m \"Commit " + to_string(i) + "\"";
        system(cmd.c_str());
    }

    return 0;
}