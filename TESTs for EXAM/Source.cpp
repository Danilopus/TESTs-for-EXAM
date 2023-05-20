#include <iostream>
#include <fstream>
#include <string> // первая нерабочая комманда без библиотеки: getline


void Strings_and_char_arrays_Q124()
{
	int Size_Array_of_C_strings = 7;

	char C_string_1[] = "JOPA";
	char C_string_2[5] = "JOPA";
	char C_string_3[] = { 'J', 'O', 'P', 'A' };
	char C_string_4[4] = { 'J', 'O', 'P', 'A' };
	char C_string_5[] = { 'J', 'O', 'P', 'A' };
	char C_string_5_2[] = { 'J', 'O', 'P', 'A' };
	char C_string_6[5] = { 'J', 'O', 'P', 'A', '\0' };
	//char* C_string_5 = "JOPA"; //Error
	//const char* const C_string_7 = "JOPA";
	const char* C_string_7 = "JOPA";
	//const char const*  C_string_7 = "JOPA";
	//const char * const C_string_7 = "JOPA";



	//char* C_string_array[]{ "TEXT1", "TEXT2", "TEXT3" };
	//const char* C_string_array[]{ "TEXT1", "TEXT2", "TEXT3" };
	//const char* C_string_array_2[]{ {'T','e','x', 't','1'}, {'T','e','x', 't','2'}, {'T','e','x', 't','3'} };
	//char* C_string_array_2[]{ C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6 };



	//Size_Array_of_C_strings = 6;
	char** Array_of_C_strings = new char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6, C_string_1};
	//char** Array_of_C_strings = new char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6};		
	//char** Array_of_C_strings = new char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6};
	//char** Array_of_C_strings = new char[] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6};
	//const char** Array_of_C_strings = new const char* [Size_Array_of_C_strings] {C_string_1, C_string_2, C_string_3, C_string_4, C_string_5, C_string_6, C_string_7 };
	char** Just_pointer = Array_of_C_strings;
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
	//*
	std::cout << "\n\n" << "Through loop Array_of_C_strings[]";
	for (int II = 0; II < Size_Array_of_C_strings; II++)
	{
		/*
		std::cout << "\n\n" << "C_string_"<<II+1<<":\n" << Array_of_C_strings[II];
		std::cout << "\n" << "C_string_" << II + 1<< " in char loop" << ":\n";
		for (int i = 0; i < strlen(Array_of_C_strings[II]); i++)
			std::cout << Array_of_C_strings[II][i];

		std::cout << "\n" << "C_string_" << II + 1 << " in pointer-logic major array loop" << ":\n";
		for (int i = 0; i < strlen(Array_of_C_strings[II]); i++)
			//std::cout << (*(Array_of_C_strings+II))+i;
			std::cout << *((*(Array_of_C_strings + II)) + i);

0
		std::cout << "\n" << "C_string_" << II+1<<" in pointer loop" << ":\n";
		for (int i = 0; i < strlen(Array_of_C_strings[II]); i++)
			std::cout << *(Array_of_C_strings[II] + i);
		*/
		int str_length = strlen(Array_of_C_strings[II]);
		std::cout << "\n" << "C_string_" << II + 1 << " with pointer increment" << ":\n";
		for (int i = 0; i < str_length; i++)
			std::cout << *((*Just_pointer)++);
		Just_pointer++;
	}
	//*/


	std::string STD_string_1 = "JOJOPA";
	std::string STD_string_2 = { 'J', 'O', 'P', 'A' };
	//std::string STD_string_2_1[] = {'J', 'O', 'P', 'A'}; //Error
	//std::string STD_string_2_1 = { "J", "O", "P" , "A" }; //Error
	std::string STD_string_3 = { 'J', 'O', 'P', 'A','J', 'O', 'P', 'A', '\0' };

	std::string STD_string_4[] = { "J", "O", "P" , "A" };
	std::string STD_string_5[5] = { "J", "O", "P" , "A" };
	
	const int Size_Array_of_standart_strings = 3;
	//std::string* Array_of_standart_strings{ STD_string_1, STD_string_2, STD_string_3, STD_string_4, STD_string_5 }; //Error
	//std::string* Array_of_standart_strings = new std::string[]{ STD_string_1, STD_string_2, STD_string_3, STD_string_4, STD_string_5 }; //Error
	//std::string* Array_of_standart_strings = new std::string[5]{ STD_string_1, STD_string_2, STD_string_3, STD_string_4, STD_string_5 }; //Error

	//std::string Array_of_standart_strings[]{ STD_string_1, STD_string_2, STD_string_3, STD_string_4, STD_string_5 }; //Error
	//std::string* Array_of_standart_strings = new std::string[]{ STD_string_1, STD_string_2, STD_string_3 }; //Error
	//
	// Ок	
	std::string* Array_of_standart_strings = new std::string[Size_Array_of_standart_strings]{ STD_string_1, STD_string_2, STD_string_3 };
	//std::string Array_of_standart_strings[]{ STD_string_1, STD_string_2, STD_string_3 };
	//Array_of_standart_strings.size();
	//Array_of_standart_strings->size();
	std::string* STD_string_pointer = Array_of_standart_strings;
	std::cout << "\n\n" << "Through loop Array_of_standart_strings[]";
	for (int II = 0; II < Size_Array_of_standart_strings; II++)
	{
		/*
		std::cout << "\n\n" << "STD_string_" << II + 1 << ":\n" << Array_of_standart_strings[II];
		std::cout << "\n" << "STD_string_" << II + 1 << " in char loop" << ":\n";
		for (int i = 0; i < Array_of_standart_strings[II].length(); i++)
			std::cout << Array_of_standart_strings[II][i];

		std::cout << "\n" << "STD_string_" << II + 1 << " in pointer-logic of major array" << ":\n";
		for (int i = 0; i < Array_of_standart_strings[II].length(); i++)
			std::cout << (*(Array_of_standart_strings+II))[i];
		*/
		std::cout << "\n" << "STD_string_" << II + 1 << " in pointer-logic of major array with increment" << ":\n";
		for (int i = 0; i < Array_of_standart_strings[II].length(); i++)
			std::cout << (*(STD_string_pointer))[i];
		STD_string_pointer++;

		/*
		std::cout << "\n" << "STD_string_" << II + 1 << " in pointer loop" << ":\n";
		for (int i = 0; i < (Array_of_standart_strings[II].length()); i++)
			std::cout << *(Array_of_standart_strings[II] + i);

		int str_length = Array_of_standart_strings[II].length();
		std::cout << "\n" << "STD_string_" << II + 1 << " with increment" << ":\n";
		for (int i = 0; i < str_length; i++)
			std::cout << *(Array_of_standart_strings[II]++);
		*/
	}

	std::string* str_pointer = &STD_string_1;
	std::string* old_str_pointer = nullptr;
	std::cout << "\n\n" << "STD_string_1" << " in pointer loop" << ":\n";
	for (int i = 0; i < (STD_string_1.length()); i++)
	{
		old_str_pointer = str_pointer;
		std::cout << str_pointer++ << "\n";
		long long offset = long(str_pointer) - long(old_str_pointer);
		std::cout << "offset: " << offset << "\n";
	}


	//std::string STD_string_5[5] = { "J", "O", "P" , "A" };
	std::string* pointer = STD_string_5;
	std::cout << "\n" << "STD_string_5" << " with increment" << ":\n";
	for (int i = 0; i < 5; i++)
		std::cout << *pointer++;





	STD_string_1.length();
	sizeof(STD_string_1);
	STD_string_1.max_size();

	strlen(C_string_1);
}

void Structures_Q130()
{
	struct STRUCT_for_TEST_1
	{
		int a;		// 4 bytes
		int b;		// 4 bytes
		short c;	// 2 bytes
		char d;		// 1 bytes
	} STRUCT_for_TEST_Object{ 5,10,1000,72};
	std::cout <<"sizeof(STRUCT_for_TEST_Object): " << sizeof(STRUCT_for_TEST_Object) << "\n";
	//sizeof=12

	struct STRUCT_for_TEST_2
	{
		int a;		// 4 bytes
		int b;		// 4 bytes
		short c;	// 2 bytes
		char d;		// 1 bytes
		std::string str; // ???
	} STRUCT_for_TEST_2_Object{ 5,10,1000,72,"" };

	std::cout << "sizeof(STRUCT_for_TEST_2_Object): " << sizeof(STRUCT_for_TEST_2_Object) << "\n";
	//STRUCT_for_TEST_2_Object.str = "Some text information, summary about 30 characters";
	STRUCT_for_TEST_2_Object.str = "Some text information, summary about 30 characters/2 Some text information, summary about 30 characters /3 Some text information, summary about 30 characters /4 Some text information, summary about 30 characters /5+ Some text information, summary about 30 characters/2 Some text information, summary about 30 characters /3 Some text information, summary about 30 characters /4 Some text information, summary about 30 characters";
	//STRUCT_for_TEST_2_Object.str.length();
	std::cout << "sizeof(STRUCT_for_TEST_2_Object) + str["<< STRUCT_for_TEST_2_Object.str.length()<<"]: " << sizeof(STRUCT_for_TEST_2_Object) << "\n";

	struct STRUCT_for_TEST_3
	{
		//int a;		// 4 bytes
		//int b;		// 4 bytes
		//short c;	// 2 bytes
		char d;		// 1 bytes
		std::string str; // ???
	} STRUCT_for_TEST_3_Object;//{ 72,"" };
	std::cout << "sizeof(STRUCT_for_TEST_3_Object): " << sizeof(STRUCT_for_TEST_3_Object) << "\n";

}

void Files()
{


	std::ifstream File_Stream("Test_file.txt", std::ios::in);// , ;
	File_Stream.open("Test_file.txt");
	if (File_Stream.is_open())
	{
		std::cout << "\n1 open";
		File_Stream.open("Test_file.txt");
		if (File_Stream.is_open())
		{
			std::cout << "\n2 open";
			
			File_Stream.open("Test_file.txt");
			if (File_Stream.is_open())
			{
				std::cout << "\n3 open";
			}
		}
	}

	std::fstream File_Stream_IO("Test_file_2.txt", std::ios::in | std::ios::out);// , ;
	//File_Stream.op
	//std::fstream File_Stream_IO("Test_file_2.txt",std::ios::out);// , ;

	char symbol;
	std::string read_buffer;
	while (File_Stream_IO.get(symbol))
	{
		read_buffer += symbol;
	}

	std::string tmp_str;
	while (!File_Stream_IO.eof())
	{
		tmp_str = "";
		File_Stream_IO >> tmp_str;
	
		read_buffer += tmp_str;

	}

	while (std::getline(File_Stream_IO, tmp_str))
	{
		read_buffer += tmp_str + '\n';
	}


	std::string insertion = "INSERTION";
	std::fstream file_object("Test_file_2.txt", std::ios::out);// , ;
	int file_length = file_object.tellg();
	file_object.seekg(file_length / 2, std::ios::beg);
	file_object << insertion << '\n';
	file_object.close();
}

void Strings()
{
	std::string str;
	std::cout << "str: " << str;
	//char* ptr_char1{ "TEXT" }; //error
	char Cstr1[]{"TEXT"};
	char* Cstr1_ptr = Cstr1;

	char* Cstr3_ptr = new char[5]{ "TEXT" };

	//char* Cstr_array[]{ "text1","text2", "text3" ,"text2", "text3" };
	const char* Cstr_array[]{ "text1","text2", "text3" ,"text2", "text3" };

	const char** Cstr_array_ptr = Cstr_array;
	//char** Cstr_array[]= new char[3][5]{ "text1","text2", "text3" };
	//const char** Cstr_array2 { "text1","text2", "text3" };
	const char* Cstr2 {"text1"};

	const char* ptr_char1{ "TEXT" };
	for (int i = 0; i < 5; i++)
	{
		std::cout<<"\n"<<"ptr_char1"<< ptr_char1++;
		std::cout << "Cstr2" << Cstr2++;

		//std::cout << "\n" << "Cstr_array" << Cstr_array++;
		std::cout << "\n" << "Cstr_array_ptr" << *(Cstr_array_ptr++);

		//std::cout << "\n" << "Cstr1" << Cstr1++;
		std::cout << "\n" << "Cstr1_ptr" << *(Cstr1_ptr++);
		std::cout << "\n" << "Cstr3_ptr" << Cstr3_ptr++;
		std::cout << "\n\n"<<i;

	}

	char* cstr_ptr_5 = new char[5];
}

int main()
{
	//Structures_Q130();
	//Files();
	Strings();


	std::cout << "\n\n";
	system("pause");
	//_getch();
}