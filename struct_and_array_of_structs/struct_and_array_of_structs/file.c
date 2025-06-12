#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//define a struct for a person, and print info from an array of people

struct Person {
	char name[20];
	int age;
};

int main() {
	struct Person people[2];

	strcpy(people[0].name, "Alice");
	people[0].age = 25;

	strcpy(people[1].name, "Bob");
	people[1].age = 27;

	for (int i = 0; i < 2; i++) {
		printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
	}

	return 0;
}