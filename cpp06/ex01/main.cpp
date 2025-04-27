#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data;
    data.id = 42;
    data.name = "ChatGPT";

    uintptr_t raw = Serializer::serialize(&data);

    Data *ptr = Serializer::deserialize(raw);

    std::cout << "Original Address : " << &data << std::endl;
    std::cout << "Serialized Value : " << raw << std::endl;
    std::cout << "Deserialized Ptr : " << ptr << std::endl;

    std::cout << "Data id : " << ptr->id << std::endl;
    std::cout << "Data name : " << ptr->name << std::endl;

    if (ptr == &data)
        std::cout << "✅ Pointer matches!" << std::endl;
    else
        std::cout << "❌ Pointer mismatch!" << std::endl;

    return 0;
}
