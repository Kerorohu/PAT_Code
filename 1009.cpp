#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <regex>

using namespace std;

std::vector<std::string> s_split(const std::string& in, const std::string& delim);
int main() {
    string str;
    getline(cin, str);
    //vector<string> v;
    auto s_result = s_split(str, "[\\s]+");
    vector<string>::reverse_iterator rit;
    for (rit = s_result.rbegin(); rit != s_result.rend(); rit++) {
        cout << *rit;
        if (rit != s_result.rend() - 1)
            cout << " ";
    }

}

std::vector<std::string> s_split(const std::string& in, const std::string& delim) {
    std::regex re{ delim };
    // ���� std::vector::vector (InputIterator first, InputIterator last,const allocator_type& alloc = allocator_type())
    // ���캯��,����ַ����ָ�
    return std::vector<std::string> {
        std::sregex_token_iterator(in.begin(), in.end(), re, -1),
            std::sregex_token_iterator()
    };
}