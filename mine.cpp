#include <bits/stdc++.h>
#include "sha256.h"

using namespace std;
using namespace chrono;

const string target = "00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";

int main()
{
    string input;
    cout << "Enter the input string: ";
    cout.flush();
    getline(cin, input);

    long nonce = 1;

    auto begin = high_resolution_clock::now();

    while(true){
        string temp = input + to_string(nonce);
        string hash = sha256(temp);

        for(char &c : hash)
            c = (char)toupper(c);

        if(hash < target){
            cout << "Achieved hash: " << hash << "\nNonce: " << nonce << "\n";
            break;
        }

        nonce++;
    }

    auto end = high_resolution_clock::now();
    cout << fixed << setprecision(6);
    cout << "Execution Time: " << duration_cast<duration<double>>(end - begin).count() << "seconds" << endl;

    return 0;
}
