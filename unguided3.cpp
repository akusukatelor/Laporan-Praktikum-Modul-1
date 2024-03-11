#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> cars = {
        {1,"audi"},
        {2, "BMW"},
        {3, "FORD"},
        {4, "TOSSA"},
        {5, "Oplet"},
    };

    cout << "daftar mobil terkini: " <<endl;

    for(auto itr = cars.begin(); itr != cars.end(); ++itr) {
        cout << itr->first <<". " << itr->second << endl;
    }
    
    return 0;
}

