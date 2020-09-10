#include "../Utils/StdAfx.h"

struct Vector3
{
	float x = 10;
	float y = 11;
	float z = 12;
};

int main()
{
	int32_t value = 5;
	int32_t fvalue = 6;

	int32_t* p = (int32_t*)&value;
	LOG(&value);
	LOG(p - 3);
	LOG(&fvalue);

	int32_t array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector;

	//////////////////////////

	int32_t* hvalue = new int32_t;
	int32_t* harray = new int32_t[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvector = new Vector3();

	delete hvalue;
	delete harray;
	delete hvector;

	return EXIT_SUCCESS;
}