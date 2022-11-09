#include<bits/stdc++.h>
#include "mystack.h"
using namespace std;
int globalid= 100;
class person{
    string name;
    int id;
    float salary;
public:
	person(){
		name="";
		id=-1;
		salary=-1.0;
	}
	void setname(string name){
		this->name=name;
	}
	void setsalary(float salary){
		this->salary=salary;
	}
	person(string name, float salary){
		setname(name);
		setsalary(salary);
		id=globalid;
		globalid++;
	}

	int getid(){
		return id;
	}
	string getname(){
		return name;
	}
	float getsalary(){
		return salary;
	}
	void print(){
		cout<<name<<" | "<<id<<" | "<<salary<<endl;
	}
};
int main(){
	Stack <person> st;
	person a("Akib Zaman", 654.6);
    person b("Mahbob Hasan",876.3);
    person c("Fayaz Ali", 875.3);
	st.Push(a);
	st.Push(b);
	st.Push(c);
	while(!st.Empty()){
		person printodj;
		printodj=st.Pop();
		printodj.print();
	}
	st.Top();
}