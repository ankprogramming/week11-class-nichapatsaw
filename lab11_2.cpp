#include <iostream>
#include <string>

using namespace std;

int main() {
    /*���Ѻ����ѡ��*/
    string str = "There are two needles in this haystack with needles.";
    cout << str << endl;
    cout << "Length :" << str.length() << endl;

    /*������ͤ������� ������Ѻ����ѡ��*/
    str += "I Want to eat needle.";
    cout << str << endl;
    cout << "Length :" << str.length() << endl;

    /*���ź�͡����˹��*/
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
