#include <fstream>
#include<iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ifstream ifs("musique.txt");
    string m;
    map<string, int> map;

    while (ifs >> m)
        ++map[m];

    typedef std::map<string, int>::const_iterator iter;
    for (iter it = map.begin(); it != map.end(); ++it)
       cout << "le nombre d'occurence du mot " << it->first << " est " << it->second << endl;

    return 0;
}