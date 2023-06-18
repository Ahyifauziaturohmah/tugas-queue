#include <iostream>
#include "queue.h"

int pilih, b ,ulang;
int i = 0;

using namespace std;

int main()
{
	
	Queue q1;
	q1.push(1);
	q1.push(12);
	q1.push(4);
	q1.push(43);
	q1.push(10);
	
	

		cout << "pilih menu"<<endl;
		cout << "1. pop"<<endl;
		cout << "2. push"<<endl;
		cin >> pilih;
		
		if (pilih == 1)
		{
			q1.pop();
		}
		else if (pilih == 2)
		{
			cout << "masukan data" << endl;
			cin >> b;
			q1.push(b);
		}else 
		{
			cout << " ";
		}
		
		cout << "size : " << q1.size() << endl;
		cout << "front : " << q1.front() << endl;
		cout << "back : " << q1.back() << endl;
		cout << "elmts: ";
		
		while (!q1.empty())
		{
			cout << q1.front() << ' ';
			q1.pop();
		}
		cout << endl;	
	

		
	return 0;
	
}

