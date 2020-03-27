#include <string>
#include <fstream>
using namespace std;
class files_q{
public:
    inline bool exists_test0(const string);
    inline bool exists_test1(const string);
    inline bool exists_test2(const string);
    inline bool exists_test3(const string);



};
inline bool files_q::exists_test3 (const string& name) {
  struct stat buffer;
  return (stat (name.c_str(), &buffer) == 0);
}

inline bool files_q::exists_test2 (const string& name) {
    return ( access( name.c_str(), F_OK ) != -1 );
}

inline bool files_q::exists_test0 (const string& name) {
    ifstream f(name.c_str());
    return f.good();
}

inline bool files_q::exists_test1 (const string& name) {
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }
}

