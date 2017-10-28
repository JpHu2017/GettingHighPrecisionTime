// demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

#include <chrono> //高精度定时头文件

//该程序参考博客http://blog.csdn.net/oncealong/article/details/28599655 
int _tmain(int argc, _TCHAR* argv[])
{
	std::chrono::steady_clock::time_point t1 = std::chrono::system_clock::now();
	std::cout << "Hello World\n";
	std::chrono::steady_clock::time_point t2 = std::chrono::system_clock::now();
	std::cout << (t2 - t1).count() << "tick count" << std::endl;
	// microsecond : 微妙； millisecond : 毫秒
	std::cout << std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count() << " microseconds" << std::endl;

	return 0;
}

