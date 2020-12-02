#include<iostream>
#include<stack>
using namespace std;

class Node {
public:
    int data;
    Node* next = 0;
    Node* prev = 0;
    Node(int d = 0) {
        data = d;
        cout << "Const" << endl;
    }
    ~Node() {
        cout << "Dest" << endl;
    }
};
int main() {

    Node* start = 0;
    Node* tail = 0;

    int datas[] = { 100,200,300 };
    for (int i = 0; i < sizeof(datas) / sizeof(int); i++) {
        if (!start) {
            start = new Node(datas[i]);
            tail = start;
        }
        /*else if (i > 0) {
           t->prev = new Node(datas[i - 1]);
        }*/
        else {
            Node* n = new Node(datas[i]);
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }
    Node* n = start;
    while (n) {
        cout << n->data << endl;
        n = n->next;
    }
    cout << "====================" << endl;
    Node* p = tail;
    while (p) {
        cout << p->data << endl;
        p = p->prev;
    }
}



//int main() {
//	Node* start;
//	start = new Node(100);
//	Node* t1 = new Node(200);
//	start->next = t1;
//	t1->prev = start;
//
//	Node* t2 = new Node(300);
//	t1->next = t2;
//	t2->prev = t1;
//
//	//start->next = new Node(200);
//	//end->prev = new Node(200);
//	while (start) {
//
//		cout << start->data << endl;
//		t1 = start->next;
//		cout << t1->data << endl;
//		t2 = t1->next;
//		cout << t2->data << endl;
//		
//		break;
//	}
//
//	while (1) {
//
//		cout << t2->data << endl;
//		t1 = t2->prev;
//		delete(t2);
//		cout << t1->data << endl;
//		start = t1->prev;
//		delete(t1);
//		cout << start->data << endl;
//		break;
//	}
//	
//	return 0;
//}



























//struct Node {
//	int data;
//	Node* next;
//};

//class Stack {
//private:
//	Node* topPtr;
//public:
//	Stack() { //생성자 Stack이라는 이름의 클래스에서 선언된 변수들을 초기화하는 곳이다
//		topPtr = NULL;
//	}
//
//	~Stack() {
//
//	}
//	void Push(int n) {
//		Node* newNode = new Node;
//		newNode->data = n;
//		newNode->next = topPtr;
//		topPtr = newNode;
//	}
//	int Pop() {
//
//	}
//	
//};

/*
class Node {
public:
	int data;
	Node* link;
	Node(int n) {
		data = n;
		link = 0;
	};
};

int main() {
	Node* start;
	start = new Node(100);
	//Node* t = new Node(200);
	start->link = new Node(200);
	Node* trav = start;
	while (trav) {
		cout << trav->data << endl;
		trav = trav->link;
	}
	while (start) {
		trav = start->link;
		delete(start);
		start = trav;
	}
	return 0;
}
*/