#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data		*data;
	uintptr_t	rawData;
	Data		*deData;

	data = new Data;
	std::cout << "Data: " << data << std::endl;
	rawData = serialize(data);
	std::cout << "Raw Data: " << rawData << std::endl;
	deData = deserialize(rawData);
	std::cout << "Deserialized Data: " << deData << std::endl;

	delete data;
	return (0);
}
