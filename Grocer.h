// grocer.h

#include <map>
#include <string>

class Grocer {
private:
    std::map<std::string, int> itemsFrequency;

public:
    Grocer(const std::string& filename);
    int getItemFrequency(const std::string& item);
    void displayFrequencies();
    void displayHistogram();
    const std::map<std::string, int>& getAllFrequencies() const;  // Added for backup
};

