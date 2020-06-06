#include <iostream>
#include <string>

//Uncomment the following line to stop intelisens from functioning properly
//Please note that you can still navigate to rx.hpp file. Commenting out
//the include again brings back intelisense back to normal after about 3 mins
//#include <rxcpp/rx.hpp>

using namespace std;

int main() {
    cout << "Hello World\n";
    cout << "Input: ";
    string data;

    getline(cin, data);
    cout << "Output: " << data << "\n\n";
    return 0;
}