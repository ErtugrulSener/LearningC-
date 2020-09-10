#pragma once

#ifndef HEADER_N_VECTORS
#define HEADER_N_VECTORS

class Vector
{
public:
	explicit Vector() = default;
	explicit Vector(int x, int y, int z) : x(x), y(y), z(z) {};

	struct struct_XYZ
	{
		int x, y, z;

		struct_XYZ(int x, int y, int z) : x(x), y(y), z(z) {}
	};

	int x, y, z;
	int GetX() const { return x; };
	int GetY() const { return y; };
	int GetZ() const { return z; };

	std::string GetXYZ() const {
		struct_XYZ s = struct_XYZ(x, y, z); 
		std::stringstream ss("");
		ss << s.x << " ";
		ss << s.y << " ";
		ss << s.z;
		return ss.str();
	};

	Vector& operator=(Vector& vec2)
	{
		x = vec2.x;
		y = vec2.y;
		z = vec2.z;
		return *this;
	}

	Vector& operator+=(Vector vec2)
	{
		*this = vec2;
		return *this;
	}
};

#endif