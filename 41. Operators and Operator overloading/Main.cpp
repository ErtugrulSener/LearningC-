#include "../Utils/StdAfx.h"
#include "Vectors.h"

struct Vector2
{
	float x, y;

	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}
};

std::ostream& operator<<(std::ostream& ostream, const Vector2& other)
{
	ostream << other.x << ", " << other.y;
	return ostream;
}

int main()
{
	/* Operator examples:
		[]
		*
		->
		&&
		=
		,
	*/

	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result = position + speed * powerup;

	LOG(result.x);
	LOG(result.y);

	std::cout << powerup << std::endl;

	// Example of my own
	Vector v1(4, 5, 6);
	Vector v2(1, 2, 3);
	Vector vTest(9, 9, 9);

	v1 = v2;

	Vector v3;
	v3 += v1;

	LOG(v1.GetXYZ());
	LOG(v3.GetXYZ());

	int* i = new int;
	*i = 4;

	int *y = i;

	LOG(&*i);
	LOG(&(*i));
	LOG(&(*y));

	return EXIT_SUCCESS;
}