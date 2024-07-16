#include <fstream>
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string filename = "input.txt";
    ifstream reader(filename, ios::in);
 
    int n = 0;
    int arr[100];
 
    while (!reader.eof()) {
        reader >> arr[n];
        n++;
    }
 
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    cin.get();
 
    return 0;
}
