#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long int n;
	cin >> n;
	int a;
	vector <int> f;
	bool b = false;
	for (int i = 0; i<n-1; i++)
	{
		cin >> a;
		f.push_back(a);
	}
	sort(f.begin(),f.end());


	for(int i = 0; i<n-1; i++)
	{
		if (f[i]!= i+1)
		{	
			b = true;
			cout << i+1;
			break;
		}
		

	}
	if (b == false)
		cout << n;

}