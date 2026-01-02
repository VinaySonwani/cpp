
#include <iostream>
#include <thread>			// header for standard threads
#include <mutex>			// Synchronisation class header.
#include <future>
using namespace std;

// fns with void return type which will be called from the threads.
void fn1();				
void fn2( int i );
void fn3();
void fn4();

// Function has void return type but still fetching value using promise and future.
void fn5( std::promise<int> && p );	

//  function with int return type and fetching value using future and async.
int fn6( int k );	

int fn7( ); 		// Pending. Fn has non-void retune type, returns something but the thread doesn't use the return value.					


// A global resource which will be accessed from the threads.
int a = 15;	

// global synchronisation object.				
mutex mtx;				



int main()
{
	thread myThread(fn1);
	if (myThread.joinable())		// joinable() checks if a thread can be joined. if a thread has not joined yet or detached yet, it is joinable.
	{
		myThread.join();		// join() instructs the main thread to wait for "myThread" thread to finish its execution first.
	}



	thread myThread2(fn1);
	myThread2.detach();		// detach(), detaches a thread from the parent thread i.e. main thread. It allows parent and child threads to
	                    				// execute independently from each other. Parent and child threads are not synchronised in any way.
	if (myThread2.joinable())
	{
		myThread2.join(); 
	}
	else
	{
		cout << "myThread2 has been detached" << endl;
	}


	// passing arguments to thread fn.
	thread myThread3(fn2, 5);				
	if (myThread3.joinable())
	{
		myThread3.join();
	}




	// getting thread ID. 
	thread myThread4(fn1);
	thread::id ID4 = myThread4.get_id();		// This must be done before joining.	
	if (myThread4.joinable())
	{
		myThread4.join();
		cout << "thread with thread ID " << ID4 << "has finished executing" << endl;
	}

	// Another way of getting thread ID
	cout << this_thread::get_id( ) << endl;		// returns thread ID of the thread which is executing current function. here its returning thread ID of the main
										// thread as it'e executing main function.



	// For demonstrating mutex
	thread myThread5(fn3);					
	thread myThread6(fn4);		
	if (myThread5.joinable())
	{
		myThread5.join();
	}
	if (myThread6.joinable())
	{
		myThread6.join();
	}




	// thread myThread7(fn1);				// not joining. It crashes the application.



	// Returning a value from the thread. This works among multiple threads as well.
	std::promise<int> p;						
	auto f = p.get_future();
	thread myThread8(fn5, std::move(p));
	myThread8.join();
	cout << "Return value from promise-future thread is => " << f.get() << endl;


	// implementation of the above approach as a wrapper.		
	future<int> fp = async(launch::async, fn6, 79);				
    	if(fp.valid())
       		cout<<"Return value from async-future thread is => " << fp.get() << endl;



	return 0;
}


void fn1()
{
	cout << "fn1" << endl;
}

void fn2(int i)
{
	cout << "Value of i is: " << i <<  endl;
}

void fn3()
{
	mtx.lock();		// locking mutex to restrict simultaneous access to global resource and avoiding conflict with other thread.
	a += 1;
	cout << "fn3 Value of a is " << a << endl;
	mtx.unlock();		// unlocking.
}

void fn4()
{
	mtx.lock();
	a -= 1;
	cout << "fn4 Value of a is " << a << endl;
	mtx.unlock();
}

void fn5(std::promise<int> && p) 
{
	p.set_value(1);  
}

int fn6( int k ) 
{
	return ++k; 
}


// A crash in a thread, is a crash of application.

