#include <iostream>
#include <map>
using namespace std;
int main(void) {

    map<string, int> mapset;
	mapset.insert({ "Alice", 100 });
	mapset.insert({ "Bob", 200 });

	if (mapset.find({"Alice"}) != mapset.end()) 
	{
		cout << "find" << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//인덱스기반
	for (auto iter = mapset.begin() ; iter !=  mapset.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	//범위기반
	for (auto iter : mapset) {
		cout << iter.first << " " << iter.second << endl;
	}

    cout << mapset["Alice"];
	return 0;
}