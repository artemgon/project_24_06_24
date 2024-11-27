#include "funcs.h"

int main()
{
	//1-st function
	/*string s1;
	int length;
	cout << "Please, enter a string" << endl;
	getline(cin, s1);
	length = my_strlen(s1.c_str());
	cout << "Length: " << length << endl;*/
	
	//2-nd function
	/*const char* source = "Hello, World!";
	char dest[50];
	mystrcpy(dest, source);
	cout << "Source: " << source << endl;
	cout << "Destination: " << dest << endl;*/

	//3-rd function
	/*const int size = 1000;
	char str1[size] = "Hello,";
	char str2[size] = " World";
	mystrcat(str1, str2);
	cout << "Source: " << str2 << endl;
	cout << "Destination: " << str1 << endl;*/

	//4-th function
	/*char str[] = "Hello, World!";
	char symbol = 'o';
	char* result = mystrchr(str, symbol);
	cout << "Symbol '" << symbol << "' found at position: " << (result - str) << endl;*/

	//5-th function
	/*char str1[] = "Hello, World. How is it going?";
	char str2[] = "it";
	char* result = mystrstr(str1, str2);
	if (result) {
		cout << "Found substring at position: " << result - str1 << endl;
	}
	else {
		cout << "Substring not found" << endl;
	}*/

	//6-th function
	/*char str1[] = "Hello", str2[] = "Hi";
	int result = mystrcmp(str1, str2);
	cout << result << endl;*/

	//7-th function
	/*char str[1000];
	cin.getline(str1, 1000);
	int result = StringToNumber(str);
	cout << result << endl;*/

	//8-th function
	/*int number;
	cin >> number;
	const char* str = new char[100];
	str = NumberToString(number);
	cout << str << endl;*/

	//9-th function
	/*char str1[1000];
	cin.getline(str1, 1000);
	char* str2 = Uppercase(str1);
	cout << "Result: " << str2 << endl;*/

	//10-th function
	/*char str1[1000];
	cin.getline(str1, 1000);
	char* str2 = Lowercase(str1);
	cout << "Result: " << str2 << endl;*/

	//11-th function
	/*char str1[1000];
	cin.getline(str1, 1000);
	char* str2 = mystrrev(str1);
	cout << "Result: " << str2 << endl;*/
	return 0;
}