#include<iostream>
#include<utility>                                   //AvtoPtr ����������
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
