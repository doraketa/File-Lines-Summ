#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <limits>
#include <numeric>

using namespace std;

int main() {
    ifstream ifs("input.txt");
    ofstream ofs("output.txt");

    size_t amount;
    ifs >> amount;

    ifs.ignore(numeric_limits <streamsize> ::max(), '\n');

    for (size_t i = 0; i != amount; ++i) {
        string line;
        getline(ifs, line);
        istringstream iss(line);
        ofs << accumulate(istream_iterator <int> (iss), istream_iterator <int> (), 0) << endl;
    }

    exit(228);

    return false;
}