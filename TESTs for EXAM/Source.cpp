#include <iostream>
//#include <string>



int main()
{
	int Size_Array_of_C_strings = 7;

	//char** Array_of_C_strings = new char*[Size_Array_of_C_strings];
	
	//for (int II = 0; II < Size_Array_of_C_strings; II++)
	//{
		char C_string_1[] = "JOPA";
		//char C_string_2[5] = "JOPA";
		char C_string_2[] = "JOPA";
		char C_string_3[] = { 'J', 'O', 'P', 'A' };
		char C_string_4[4] = { 'J', 'O', 'P', 'A' };
		char C_string_5[] = { 'J', 'O', 'P', 'A'};
		char C_string_5_2[] = { 'J', 'O', 'P', 'A' };
		char C_string_6[5] = { 'J', 'O', 'P', 'A', '\0' };
		//char* C_string_5 = "JOPA"; //Error
		const char* C_string_7 = "JOPA";

		//char* C_string_array[]{ "TEXT1", "TEXT2", "TEXT3" };
		//const char* C_string_array[]{ "TEXT1", "TEXT2", "TEXT3" };
		//const char* C_string_array_2[]{ {'T','e','x', 't','1'}, {'T','e','x', 't','2'}, {'T','e','x', 't','3'} };
		//char* C_string_array_2[]{ C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6 };



		//Size_Array_of_C_strings = 6;
		//char** Array_of_C_strings = new char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6, C_string_1};
		//char** Array_of_C_strings = new char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6};		
		//char** Array_of_C_strings = new char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6};
		//char** Array_of_C_strings = new char[] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6};

		const char** Array_of_C_strings = new const char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6, C_string_7 };

/*
	std::cout << "\n" << "C_string_1: " << C_string_1 ;
	std::cout <<"\n"<< "C_string_1 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_1)+1; i++)
		std::cout << C_string_1[i];


	std::cout << "\n\n" << "C_string_2: " << C_string_2;
	std::cout << "\n" << "C_string_2 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_2) + 1; i++)
		std::cout << C_string_2[i];

	std::cout << "\n\n" << "C_string_3: " << C_string_3;
	std::cout << "\n" << "C_string_3 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_3); i++)
		std::cout << C_string_3[i];
	std::cout << "\n" << "C_string_3 in pointer loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_3); i++)
		std::cout << *(C_string_3 + i);

	std::cout << "\n\n" << "C_string_4: " << C_string_4;
	std::cout << "\n" << "C_string_4 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_4); i++)
		std::cout << C_string_4[i];

	std::cout << "\n\n" << "C_string_5: " << C_string_5;
	std::cout << "\n" << "C_string_5 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_5); i++)
		std::cout << C_string_5[i];

	std::cout << "\n\n" << "C_string_5_2: " << C_string_5_2;
	std::cout << "\n" << "C_string_5_2 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_5_2); i++)
		std::cout << C_string_5_2[i];
		
	std::cout << "\n\n" << "C_string_6: " << C_string_6;
	std::cout << "\n" << "C_string_6 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_6); i++)
		std::cout << C_string_6[i];

	std::cout << "\n\n" << "C_string_7: " << C_string_7;
	std::cout << "\n" << "C_string_7 in char loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_7); i++)
		std::cout << C_string_7[i];
	std::cout << "\n" << "C_string_7 in pointer loop+1" << ":\n";
	for (int i = 0; i < strlen(C_string_7); i++)
		std::cout << *(C_string_7 + i);
	std::cout << "\n" << "C_string_7 with increment" << ":\n";
	int str_length = strlen(C_string_7);
	for (int i = 0; i < str_length; i++)
		std::cout << *(C_string_7++);

//*/

	std::cout << "\n\n" << "Through loop Array_of_C_strings[]";
	for (int II = 0; II < Size_Array_of_C_strings;II++)
	{
		std::cout << "\n\n" << "C_string_"<<II+1<<": " << Array_of_C_strings[II];
		std::cout << "\n" << "C_string_" << II + 1<< " in char loop" << ":\n";
		for (int i = 0; i < strlen(Array_of_C_strings[II]); i++)
			std::cout << Array_of_C_strings[II][i];
		
		std::cout << "\n" << "C_string_" << II+1<<" in pointer loop" << ":\n";		
		for (int i = 0; i < strlen(Array_of_C_strings[II]); i++)
			std::cout << *(Array_of_C_strings[II] + i);

		int str_length = strlen(Array_of_C_strings[II]);
		std::cout << "\n" << "C_string_" << II + 1 << " with increment" << ":\n";
		for (int i = 0; i < str_length; i++)
			std::cout << *(Array_of_C_strings[II]++);
	}



	std::string STD_string_1 = "JOPA";
	std::string STD_string_2 = {'J', 'O', 'P', 'A'};
	//std::string STD_string_2_1[] = {'J', 'O', 'P', 'A'}; //Error
	std::string STD_string_2_1[] = { "J", "O", "P" , "A"};
	std::string STD_string_2_2[4] = { "J", "O", "P" , "A" };
	std::string STD_string_3 = { 'J', 'O', 'P', 'A', '\0' };





	STD_string_1.length();
	sizeof(STD_string_1);
	STD_string_1.max_size();
	
	strlen(C_string_1);


	std::cout << "\n\n";
	system("pause");
	//_getch();
}