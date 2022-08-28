#include<iostream>
#include<utility>                                   //AvtoPtr реализация
#include<memory>  
 #include<iostream>
class Task
{
public:
	int f;
	int fw=12;
	int* qw = &fw;
	
	Task();
	Task(int ft);
	~Task();
	int ok();
};
