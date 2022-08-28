#include<iostream>
#include<utility>                                   //AvtoPtr реализация
#include<memory>   
#include "autoPtrHomeW.h"
Task::Task()  {
	f;
	std::cout << "test1" << std::endl;
}

	Task::Task(int ft):f(ft) {
		
		std::cout << "test1" << std::endl;
	}
	Task::~Task() {
		std::cout << "test2" << std::endl;
	}
	int Task::ok()
	{ 
		int* nums;
		nums = new int[4]{ 1,2,3,4 };
		for (int i = 0; i < 4;i++)
		{
			std::cout << " "<< nums[i];
		}
		std::cout << std::endl;
		return *nums;
	}
