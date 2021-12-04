#include <fstream>
#include <string>
// using namespace std;

int main()
{
    std::ifstream in("list.txt");
    std::ofstream out("list.json");
    std::string line;
    out << "[" << "\n";
    while (getline(in, line))
    {
        out << "\"" << line << "\"," << "\n";
    }
    out << "]" << "\n";
    in.close();
    out.close();
    return 0;
}
