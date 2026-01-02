#include <iostream>
#include <vector>
using namespace std;


class Observer 
{
public:
	virtual void update() = 0;
};


class Subject 
{
	vector<Observer*> observers;		
public:
	void attach(Observer* observer)		// need pointer type otherwise push_back doesn't work.
	 {
        	observers.push_back(observer);
    	}

	void notify()
	 {
        	for (Observer* observer : observers) {
        	observer->update();				// using -> bcoz values in the observers are pointer type.
        }
    }
};


class ConcreteObserver1 : public Observer 
{
public:
	void update() override
	 {
        	cout << "ConcreteObserver1 has been notified!" << endl;
    	}
};


class ConcreteObserver2 : public Observer 
{
public:
	void update() override
	 {
        	cout << "ConcreteObserver2 has been notified!" << endl;
    	}
};


int main()
 {
	// Create subject and observers
    	Subject subject;
    	ConcreteObserver1 observer1;
    	ConcreteObserver2 observer2;

    	// Attach observers to the subject
    	subject.attach(&observer1);			// passing as address bcoz parameters are pointer type.
    	subject.attach(&observer2);

    	// Notify all attached observers
    	subject.notify();

    	return 0;
}




