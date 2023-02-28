#pragma once
#include <iostream>
#include <cassert>
#include <Windows.h>
#include <cstring>
#include <cctype>

using namespace std;

const int N = 200;

struct Student {
	char Name[N];
	int Marks[3];
};

struct listnode {
	Student value;
	listnode* next;
};

value struct list {
	listnode* head;
	int len;
};

listnode* createnode(Student element);
list createlist();
void deletenode(listnode* l);
void append(list% lst, Student element);
void removeat(list% lst, int i);
void appendat(list% lst, Student element, int i);
void deletelist(list% lst);
void input(Student& a);
void output(const Student& a);
void bubblesort(list% lst);