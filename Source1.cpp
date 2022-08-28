#include<iostream>
#include<utility>                                 
#include<memory>  
#include<vector>  
#include "autoPtrHomeW.h"
template<class T>
class AvtoPtr {
	T* ptr_;
public:
	explicit AvtoPtr(T* ptr) :ptr_(ptr) { std::cout << "t1" << std::endl; }
	~AvtoPtr() {
		std::cout << "t2" << std::endl;
		delete ptr_;
    }
	AvtoPtr(AvtoPtr& a) {
		ptr_ = a.ptr_;
		delete a.ptr_;
	}
	AvtoPtr<T>& operator=(AvtoPtr<T>& a)
	{
		if (&a == nullptr)
			return *this;
		delete ptr_;
		ptr_ = a.ptr_;
		delete a.ptr_;
		return *this;
	}
	T& operator*()const
	{
		return *ptr_;
	};
	T* operator->()const
	{
		return ptr_;
	};
	T* get() {
		return ptr_;
	}
	void reset(T* ptr = 0)
	{
		std::cout << "test3" << std::endl;
	};
	T* get() const throw();
	T* release()throw();
};

template <class T>
class Mass
{
private:
	int size_;
	T* num, * num2, * num3;
public:
	class Except {
	};
	Mass() {
		size_ = 0;
		num = 0;
		num2 = 0;
		num3 = 0;
	}
	Mass(int s) :size_(s), num(0), num2(0), num3(0) {
	}
	int print()
	{
		std::cout << "dfer ";
		return 0;
	}
	std::unique_ptr<Mass>numt()
	{
		num = new T[size_]{ 2,2,3,4 };
		num2 = new T[size_]{ 4, 3, 2, 1 };
		num3 = new T[size_]{ 4, 3, 2, 1 };
		if (size_ < 4)
			throw Except();
		if (size_ > 4)
			throw Except();
		for (int i = 0; i < size_;i++)
		{
			num3[i] = num[i] + num2[i];
			std::cout << num[i] << "+" << num2[i] << "=" << num3[i] << std::endl;
		}
		return 0;
	}
};

int main()
{
   int intput = 0;
   std::cout << "input\n";
   std::cin >> intput;
   std::unique_ptr< Mass<int>>r(new Mass<int>(intput));

   try {
	   r->numt();
   }
   catch (Mass<int>::Except)
   {
	   std::cout << "input correct number, no less 4! ";
   }
   AvtoPtr< Task>startPtr1{ new Task };
   AvtoPtr< Task>startPtr{ new Task };
   std::cout << startPtr1->ok() << (*startPtr).fw;
   return 0;
}
