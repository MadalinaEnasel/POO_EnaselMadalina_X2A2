#include "Math.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int Math::Add(int a, int b) {
	return a + b;
}

int Math::Add(int a, int b, int c) {
	return a + b + c;
}

int Math::Add(double a, double b) {
	return (int)(a + b);
}

int Math::Add(double a, double b, double c) {
	return (int)(a + b + c);
}

int Math::Mul(int a, int b) {
	return a * b;
}
int Math::Mul(int a, int b, int c) {
	return a * b * c;
}

int Math::Mul(double a, double b) {
	return (int)(a * b);
}
int Math::Mul(double a, double b, double c) {
	return (int)(a * b * c);
}

int Math::Add(int count, ...) {
	int i;
	int suma = 0;

	va_list vl;
	va_start(vl, count);
	for (i = 0; i < count; i++) {
		suma += va_arg(vl, int);
	}
	va_end(vl);

	return suma;

}

char* Math::Add(const char* a, const char* b) {
	if (a == nullptr || b == nullptr) {
		return nullptr;
	}

	char* suma = (char*)malloc(strlen(a) + strlen(b) + 1);

	memset(suma, 0, strlen(a) + strlen(b) + 1);
	memcpy(suma, a, strlen(a));
	memcpy(suma + strlen(a), b, strlen(b));

	return suma;
}
