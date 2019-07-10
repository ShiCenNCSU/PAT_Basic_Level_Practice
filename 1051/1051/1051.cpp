﻿// 1051.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	//p1 = p1 * 3.14159 / 180;
	//p2 = p2 * 3.14159 / 180;
	float a1, a2, i1, i2;
	a1 = r1 * cos(p1);		//r1*cos(p1)+r1*sin(p1)i = a1+i1 i
	i1 = r1 * sin(p1);
	a2 = r2 * cos(p2);		//r2*cos(p2)+r2*sin(p2)i = a2+i2 i
	i2 = r2 * sin(p2);
	float c1, c2;
	c1 = a1 * a2 - (i1 * i2);
	c2 = a1 * i2 + a2 * i1;
	if (c1 > -0.005 && c1 < 0.005) {
		printf("0.00");
	}
	else {
		printf("%.2f", c1);
	}
	if (c2 <= -0.005) {
			printf("-%.2fi", abs(c2));
	}
	else if (c2 >= 0.005) {
			printf("+%.2fi", abs(c2));
	}
	else {
		printf("+0.00i");
	}
	//}



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