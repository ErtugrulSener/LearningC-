#include "../Utils/StdAfx.h"

void PrintVector(const std::vector<int>& vec)
{
	for (const auto& element : vec)
		LOG(element);
}

void PrintMap(const std::map<int, int>& map)
{
	for (const auto& [key, value] : map)
	{
		std::stringstream s("");
		s << key << " " << value;
		LOG(s.str().c_str());
	}
}

class Entity
{
public:
	Entity() {
		LOG("Created entity!");
	}

	~Entity() {
		LOG("Destroyed entity!");
	}

	Entity(const Entity& e) {
		LOG("copied entity!");
	}
};

int main()
{
	std::vector<Entity> vec;
	vec.reserve(2);
	vec.emplace_back();
	vec.emplace_back();

	//std::map<int, int> map;
	//map.insert_or_assign(1, 1);
	//map.insert_or_assign(1, 2);
	//map.insert_or_assign(1, 3);

	//PrintMap(map);

	return EXIT_SUCCESS;
}