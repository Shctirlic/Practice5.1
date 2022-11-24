#include <iostream>
#include "Structs.h"

#pragma warning(suppress : 4996)

int main()
{

	//Book  arr2[3];
	Book* arr;
	arr = new Book[3];
	int n = 3;

	arr[0].author = "aaa bbb";
	arr[0].name_book = "xxx";
	arr[0].number_pages = 100;
	arr[0].price = 25;
	arr[0].year_publishing = 1980;


	arr[1].author = "ccc ddd";
	arr[1].name_book = "xxx xxx";
	arr[1].number_pages = 100;
	arr[1].price = 25;
	arr[1].year_publishing = 1980;


	arr[2].author = "eee fff";
	arr[2].name_book = "xxx xxx xxx";
	arr[2].number_pages = 100;
	arr[2].price = 25;
	arr[2].year_publishing = 1980;


	show_book(arr[1]);
	cout << author_name(arr[2]) << endl;
	save_book(arr[2], "G:\\1\\book.txt");

	cout << "************************" << endl;

	add_book(arr, n++);

	for (int i = 0; i < n; i++)
	{
		show_book(arr[i]);
	}


	clear_arr(arr, n);
}

