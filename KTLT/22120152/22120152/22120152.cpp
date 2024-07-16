#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Queue {
	int* list;
	int max;
	int size;
};

bool initQueue(Queue& s, int n) {
	s.max = n;
	s.list = new int[n];

	if (s.list == NULL) {
		return false;
	}

	s.size = 0;
	return true;
}

bool isEmpty(Queue s) {
	if (s.size == 0) {
		return true;
	}

	return false;
}

bool isFull(Queue s) {
	if (s.size == s.max) {
		return true;
	}

	return false;
}

bool push(Queue& s, int x) {
	if (isFull(s)) {
		cout << "Stack Overflow!" << endl;
		return false;
	}

	s.list[s.size] = x;
	s.size++;
	return true;
}

bool pop(Queue& s) {
	if (isEmpty(s)) {
		cout << "Stack Underflow!" << endl;
		return false;
	}
	for (int i = 0; i < s.size; i++) {
		s.list[i] = s.list[i + 1];
	}
	s.size--;
	return true;
}

int Front(Queue s) {
	if (isEmpty(s)) {
		return INT_MIN;
	}
	return s.list[0];
}

void solve(string s){
	Queue q;
	initQueue(q, 100);

	for (int i = 0; i < s.length() - 1; i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] != s[j]) {
				push(q, s[i]);
			}
			else {
				i++;
				push(q, s[i]);
			}
		}
	}

	while (!isEmpty(q)) {
		cout << Front(q);
		pop(q);
	}
}

int main()
{

	string s;
	cin >> s;
	solve(s);
}