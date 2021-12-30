#include <iostream>
#include <deque>
#include <string.h>
#include <list>
#include <algorithm>
#include <stack>

#include <queue>

using namespace std;

void qst1() {
	
	string c;
	int a;
	deque<string> dec;
	list <string>lst;

	cout << "donner le nombre de mots saisi\n";
		cin >>a;
   cout << "donner des mots\n";

   for (int i = 0; i < a; i++) {
	   cin >> c;
	   dec.push_back(c);
   }

   for (auto c : dec)
	   lst.push_back(c);

 lst.sort();
 
  
   cout << "****************list trier*********************" << endl;
   for (auto c : lst)
	   cout << c << endl;

}

template<class T>
void printStack(stack<T> orj) {
	while (!orj.empty())
	{
		cout<<orj.top() <<" ;";
		orj.pop();
	}
}
template<class T>
stack<T>& Reverse_stack(stack<T> orj) {
	stack<T>* St = new stack<T>();
	while (!orj.empty())
	{
		St->push(orj.top());
		orj.pop();
	}
	return *St;
}
template<class T>
bool compare(stack<T> a, stack<T> b) {
	bool res = true;
	while (!a.empty()&&!b.empty())
	{
		if (a.top() != b.top()) { res = false; break; }
		else {

			a.pop(); b.pop();
		}
	}
	return res;
}

void isPalindrome()
{
	stack<char> phrase;
	stack<char> phrase1;
	char car_lu;
	

	while ((car_lu = getchar()) != '\n')
	{

		if (car_lu != ' ' && car_lu != '.' && car_lu != ',' && car_lu != '?' && car_lu != '!') {

			phrase.push(car_lu);
		}



	}
	phrase1 = Reverse_stack(phrase);
	
	if (compare(phrase, phrase1) == true)
		cout << "yes";
	else cout << "no";
	
		
	
}

void qst3(){
	int a;
	string c;
	std::priority_queue<string> q;
	cout << "donner le nombre de mots saisi\n";
	cin >> a;
	cout << "donner des mots\n";

	for (int i = 0; i < a; i++) {
		cin >> c;
		q.push(c);
	}
	for (int i = 0; i < a; i++) {
		cout << q.top()<<endl;
		q.pop();
	}

}
void repertoire1() {
	list<string> lst;

	string c;
	int a;
	cout << "donner le nombre de mots";
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> c;
		lst.push_back(c);
	}
	list<string> lst1(lst.size());
	transform(lst.begin(), lst.end(), lst1.begin(), [](string c) {for (int i = 0; i < c.size(); i++) {
		if (c[i] == 'a' || c[i] == 'e' || c[i] == 'u' || c[i] == 'i' || c[i] == 'o' || c[i] == 'y')c[i] = '*';
	}
	return c;

	cout << "************liste transformer**************";	                                                            });
	for (auto i : lst1)
		cout << i << endl;
}
void repertoire2() {
	list<string> lst;
	string c;
	int a;
	cout << "donner le nombre de mots";
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> c;
		lst.push_back(c);
	}
	list<string> lst1(lst.size());
	transform(lst.begin(), lst.end(), lst1.begin(), [](string c) {

		for (int i = 0; i < c.size(); i++) {
			c[i] = toupper(c[i]);
		}
		return c;
		});

	cout << "************liste transformer**************" << endl;
	for (auto i : lst1)
		cout << i << endl;

}

