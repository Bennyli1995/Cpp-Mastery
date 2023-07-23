#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class IPrinter
{
public:
    virtual ~IPrinter() = default;
    virtual void OnMessageComplete(const std::string& message) const = 0;
};

class Printer
    : public IPrinter
{
public:
    void OnMessageComplete(const std::string& message) const override
    {
        std::cout << message << std::endl;
    }
};

class Decoder
{
public:
    Decoder(const IPrinter& printer)
        : mPrinter(printer)
    {}
    
    void ProcessSample(const uint64_t sequence, const char character)
    {
        /* complete your function and call mPrinter.OnMessageComplete when completing a message */
    }
    
    const IPrinter& mPrinter;
};

int main() {
    Printer printer;
    Decoder decoder(printer);
    
    uint64_t seqNum;
    char message;
    
    while(!std::cin.eof())
    {
        std::cin >> seqNum >> message;
        if (std::cin.eof()) break;
        decoder.ProcessSample(seqNum, message);
    }
    
    return  0;
}