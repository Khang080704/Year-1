#include<iostream>
#include<string>

using namespace std;

struct Node {
	int data;
	struct Node* pNext;
};

struct Linked_List {
	Node* head;
	Node* tail;
};

void KhoiTao(Linked_List& list) {
	list.head = list.tail = NULL;
}

bool KiemTraRong(Linked_List list) {
	if (list.head == NULL && list.tail == NULL) {
		return true;
	}
	return false;
}

Node* KhoiTaoNode(int x) {
	Node* newNode = new Node;
	if (newNode == NULL) {
		cout << "Khong du vung nho ";
		return NULL;
	}
	else {
		newNode->data = x;
		newNode->pNext = NULL;
		return newNode;
	}
}

void ThemVaoRong(Linked_List& list, int x) {
	Node* newNode = KhoiTaoNode(x);
	list.head = list.tail = newNode;
}

void ThemVaoDau(Linked_List& list, int x) {
	if (KiemTraRong(list)) {
		ThemVaoRong(list, x);
	}
	else {
		Node* p = KhoiTaoNode(x);
		p->pNext = list.head;
		list.head = p;
	}
}

void ThemVaoCuoi(Linked_List& list, int x) {
	if (KiemTraRong(list)) {
		ThemVaoRong(list, x);
	}
	else {
		Node* p = KhoiTaoNode(x);
		list.tail->pNext = p;
		list.tail = p;
	}
}

void inDanhSach(Linked_List list) {
	for (Node* i = list.head; i != NULL; i = i->pNext) {
		cout << i->data << " ";
	}
}

void ThemVaoGiua(Linked_List& list, Node* q, int k) {
	Node* p = KhoiTaoNode(k);
	p->pNext = q->pNext;
	q->pNext = p;
}

void xoaDau(Linked_List& list) {
	Node* p = list.head;
	list.head = list.head->pNext;
	p->pNext = NULL;
	delete p;
}

void xoaCuoi(Linked_List& list) {
	Node* pTruoc = list.head;
	Node* pSau = pTruoc->pNext;
	while (pSau != NULL) {
		pTruoc = pTruoc->pNext;
		pSau = pTruoc->pNext;
	}
	list.tail = pTruoc;
	pTruoc->pNext = NULL;
	delete pSau;
}

void xoaPhanTu(Linked_List& list, int k) {
	Node* pTruoc = list.head;
	Node* pSau = pTruoc->pNext;
	while (pSau->data != k) {
		pTruoc = pTruoc->pNext;
		pSau = pTruoc->pNext;
	}
	pTruoc->pNext = pSau->pNext;
	pSau->pNext = NULL;
}

int soLuong(Linked_List list) {
	int count = 0;
	for (Node* i = list.head; i != NULL; i = i->pNext) {
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	int k = 0;
	Linked_List list;
	KhoiTao(list);
	do {
		cin >> n >> k;
	} while ((n > 100 || n < 1) || (k < -1000 || k>1000));

	for (int i = 1; i <= n; i++) {
		int x;
		do {
			cin >> x;
		} while (abs(x) > 1000);
		ThemVaoCuoi(list, x);
	}
	if (list.head->data == k) {
		xoaDau(list);
	}
	if (list.tail->data == k) {
		xoaCuoi(list);
	}
	Node* i = list.head;

	while (i != NULL) {
		if (i->data == k) {
			Node* temp = i;
			i = i->pNext;
			xoaPhanTu(list, temp->data);
		}
		else {
			i = i->pNext;
		}
	}
	

	cout << soLuong(list) << endl;
	inDanhSach(list);


	return 0;
}
