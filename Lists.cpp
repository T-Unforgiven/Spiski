#include "Lists.h"



listnode * createnode(Student element) {
	listnode* l = new listnode;
	l->value = element;
	l->next = nullptr;
	return l;
}

list createlist() {
	list lst;
	lst.head = nullptr;
	lst.len = 0;
	return lst;
}

void deletenode(listnode* l) {
	delete l;
}

void append(list% lst, Student element) {
	listnode* l = createnode(element);
	if (lst.head == nullptr)
		lst.head = l;
	else {
		listnode* p = lst.head;
		while (p->next != nullptr)
			p = p->next;
		p->next = l;
	}
	lst.len++;
}

void removeat(list% lst, int i) {
	listnode* d;
	if (i == 0) {
		d = lst.head;
		lst.head = lst.head->next;
	}
	else {
		listnode* p = lst.head;
		for (int j = 0; j < i - 1; j++)
			p = p->next;
		d = p->next;
		p->next = d->next;
	}
	deletenode(d);
	lst.len--;
}

void appendat(list% lst, Student element, int i) {
	listnode* l = createnode(element);
	listnode* d;
	if (i == 0) {
		d = lst.head;
		lst.head = l;
		l->next = d;
	}
	else {
		listnode* p = lst.head;
		for (int j = 0; j < i - 1; j++)
			p = p->next;
		d = p->next;
		p->next = l;
		l->next = d;
	}
	lst.len++;
}

void deletelist(list% lst) {
	while (lst.head != nullptr) {
		listnode* d;
		d = lst.head;
		lst.head = lst.head->next;
		deletenode(d);
	}
	lst.len = 0;
}

void input(Student& a) {
	cout << "Введите ФИО: ";
	cin.get();
	cin.getline(a.Name, N);
	for (int i = 1; i < 4; i++) {
		cout << "Введите балл по " << i << " предмту: ";
		cin >> a.Marks[i - 1];
		cout << endl;
	}
}

void output(const Student& a) {
	cout << "ФИО: " << a.Name << endl;
	cout << "Оценки: ";
	for (int i = 0; i < 3; i++) {
		cout << a.Marks[i] << ", ";
	}
	cout << endl;
}

void bubblesort(list% lst) {
	bool flag = false;
	for (int i = lst.len - 1; i > 0 && !flag; i--) {
		flag = true;
		listnode* p = lst.head;
		for (int j = 0; j < i; j++) {
			Student s;
			if ((p->value.Marks[0] + p->value.Marks[1] + p->value.Marks[2]) < (p->next->value.Marks[0] + p->next->value.Marks[1] + p->next->value.Marks[2])) {
				for (int k = 0; k < 3; k++) {
					s.Marks[k] = p->value.Marks[k];
					p->value.Marks[k] = p->next->value.Marks[k];
					p->next->value.Marks[k] = s.Marks[k];
				}
				strcpy(s.Name, p->value.Name);
				strcpy(p->value.Name, p->next->value.Name);
				strcpy(p->next->value.Name, s.Name);
				flag = false;
			}
			p = p->next;
		}
	}
}