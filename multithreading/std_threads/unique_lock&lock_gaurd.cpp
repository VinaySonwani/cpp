
#include <iostream>
#include <thread>
#include <future>
#include <mutex>
using namespace std;

int g = 10;
mutex mt;


// using unique_lock without deferring. 
void fn1()
{
	unique_lock<mutex> ulock (mt);
	cout << ++g << endl;;
	ulock.unlock();
}



// using unique_lock with deferring so manual locking is required.
void fn2()
{
	unique_lock<mutex> ulock (mt, defer_lock);		
	ulock.lock();
	cout << ++g << endl;;
	ulock.unlock();
}




// using lock_guard
void fn3()							
{
	lock_guard<mutex> lguard(mt);
	cout << --g << endl;
}



int main()
{
	thread mythread1(fn1);
	mythread1.join();

	thread mythread2(fn2);
	mythread2.join();

	thread mythread3(fn3);
	mythread3.join();
	return 0;
}



