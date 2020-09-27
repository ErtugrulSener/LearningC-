#include "../Utils/StdAfx.h"

template<typename T, size_t S>
class Array
{
public:
	Array()
	{
		LOG("Created an Array");
	}

	~Array()
	{
		LOG("Destroyed an Array");
	}

	void PrintElements()
	{
		for (const auto& d: m_Data)
		{
			LOG(d);
		}
	}

	T& operator[](size_t index) { return m_Data[index]; }
	const T& operator[](size_t index) const { return m_Data[index]; }

	T* Data() { return m_Data; };
	const T* Data() const { return m_Data; };

	constexpr size_t Size() const { return S; }

private:
	T m_Data[S];
};

int main()
{
	Array<int32_t, 5> data;
	memset(&data[0], 0, sizeof(data));

	data[1] = 4;

	data.PrintElements();
	return EXIT_SUCCESS;
}