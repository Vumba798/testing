#include <iostream>
#include <string>
#include <utility>
#include <memory>
#include <utility>

using std::endl;
using std::cin;
using std::cout;
using std::string;

template<typename T>
T move(T&& oth) {
    --oth;
    return oth;
}



void foo(const string s) {

}
template<typename T>
T& constanter(T& val) {
    return val;
}

template <typename... Types, typename... Args>
class tuple {
private:

public:
    

};

int main() {
    string str = "foo string";
    string&& newStr = "bar string";
    cout << newStr << endl;
    cout << str << endl;
    return 0;
}
