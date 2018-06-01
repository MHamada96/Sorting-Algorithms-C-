#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>

using namespace std;
#define PI			3.14159265
#define OO			1e9
#define SS       	second
#define FF       	first  
#define Trace(n)  	cout<< #n <<" = "<< n << endl; 
#define ll			long long
#define endl		"\n"


int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { -1, 1, 0, 0, 1, -1, 1, -1 };


void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}

vector<int> v;

void insertionSort()
{
	for (int i = 1; i < v.size(); i++)
	{
		int j = i - 1;
		int temp = v[i];

		while (j >= 0 && v[j] > temp)
		{
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = temp;
	}
}

int main()
{
	fast();
	int n;
	while (cin >> n)
	{
		v.push_back(n);
	}
	insertionSort();

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}