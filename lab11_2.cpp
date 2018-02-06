#include <iostream>
#include <string>

using namespace std;

int main() {
    /*ให้นับตัวอักษร*/
    string str = "There are two needles in this haystack with needles.";
    cout << str << endl;
    cout << "Length :" << str.length() << endl;

    /*เพิ่มข้อความเข้าไป และให้นับตัวอักษร*/
    str += "I Want to eat needle.";
    cout << str << endl;
    cout << "Length :" << str.length() << endl;

    /*ให้ลบออกครึ่งหนึ่ง*/
    str.erase(str.length()/2, str.length()/2);
    cout << str << endl;
    cout << "Length :" << str.length() << endl;

    if (str.find("needle")< str.length()) {
        cout << "Found 'needle' " << endl;
    } else {
        cout << "Not Found 'needle' " << endl;
    }

    return 0;
}
