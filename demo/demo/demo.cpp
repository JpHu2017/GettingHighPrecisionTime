// demo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>

#include <chrono> //�߾��ȶ�ʱͷ�ļ�

//�ó���ο�����http://blog.csdn.net/oncealong/article/details/28599655 
int _tmain(int argc, _TCHAR* argv[])
{
	std::chrono::steady_clock::time_point t1 = std::chrono::system_clock::now();
	std::cout << "Hello World\n";
	std::chrono::steady_clock::time_point t2 = std::chrono::system_clock::now();
	std::cout << (t2 - t1).count() << "tick count" << std::endl;
	// microsecond : ΢� millisecond : ����
	std::cout << std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count() << " microseconds" << std::endl;

	return 0;
}

