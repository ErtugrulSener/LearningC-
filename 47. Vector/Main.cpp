#include "../Utils/StdAfx.h"

struct Vertex
{
	Vertex(float x, float y, float z) : x(x), y(y), z(z) {
		LOG("Vertex class is constructed");
	}

	~Vertex() { LOG("Vertex class is destroyed!"); }

	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{
	std::map<int, std::shared_ptr<Vertex>> vertices;

	Vertex* p = new Vertex(1, 2, 3);


	vertices.emplace(2, std::make_shared<Vertex>(*p));
	//vertices.emplace(3, std::make_shared<Vertex>(4, 5, 6));

	for (const auto &[key, value] : vertices)
	{
		std::cout << *value << std::endl;
	}

	vertices[2].reset();

	return EXIT_SUCCESS;
}