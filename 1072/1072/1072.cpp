﻿// 1072.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
#include<sstream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	vector<string> wupin;
	while (m--) {
		string i; cin >> i;
		wupin.push_back(i);
	}
	cin.clear();

	int count1 = 0, count2 = 0;
	while (n--) {
		string std_name; cin >> std_name;
		int num; cin >> num;
		if (num == 0) continue;
		int flag = 0;
		vector <string> std_item;
		while (num--)
		{
			string wu; cin >> wu;
			vector<string>::iterator result = find(wupin.begin(), wupin.end(), wu);
			if (result != wupin.end()) {
				std_item.push_back(wu);
				flag = 1;
				count2++;
			}

		}
		if (flag == 1) {
			count1++;
			cout << std_name << ":";
			for (int j = 0; j < std_item.size(); j++) {
				cout << " " << std_item[j];
			}
			cout << endl;
		}

	}
	cout<<count1<<' '<<count2<<endl;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
