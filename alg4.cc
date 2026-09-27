#include <iostream>
#include <string>

int main() {

    std::string s = "acb";
    std::string t = "ahbgdc";
    // std::cin >> s >> t;
    std::string res; // 0 < 6
    for(size_t i = 0; i < t.length(); ++i)
    {
        for(size_t j = 0; j < t.length(); ++j)
        {
            if(s[i] == t[j])
            {
                res += t[j];
            }
        }
    }

    if(s == res)
    {
        std::cout << "hoard\n";
    }
    else 
    {
        std::cout << "fake\n";
    }

    
    

    return 0;
}