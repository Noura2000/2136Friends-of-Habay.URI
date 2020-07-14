#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	map<string,int>yes;
	vector<string>no;
	string name, check, chosen="";
	cin >> name >> check;
	while (true)
	{
		if (check == "YES")
		{
			if (name.size() > chosen.size()) chosen = name;
			if (yes.count(name)==1) yes[name]++;
			else yes.insert(make_pair(name, 1));
		}
		else
		{
			no.push_back(name);
		}
		cin >> name;
		if (name == "FIM")break;
		cin >> check;
	}
	sort(no.begin(), no.end());
	for (auto it : yes) cout << it.first << endl;
	for (int i = 0; i < no.size(); i++) cout << no[i] << endl;
	cout << endl;
	cout << "Amigo do Habay:\n" << chosen << endl;
	return 0;
}