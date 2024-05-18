#pragma once

#include <stddef.h>
#include "exitcode.hpp"

static size_t total_allocated_memory = 0;
size_t get_total_allocated_memory()
{
    return total_allocated_memory;
}

template <typename T>
class hell_object
{
public:
    typedef T value_type;

    // Constructor
    hell_object() noexcept {}

    // Allocate memory for n objects of type T
    T *allocate(std::size_t obj_size)
    {
        unsigned long size = (obj_size * sizeof(T));

        try
        {
            auto alloc = static_cast<T *>(::operator new(size));

            // Only register the new memory once it's been declared correctly
            total_allocated_memory += size;

            return alloc;
        }
        catch (int err)
        {
            std::cout << "Unexpected error while allocating memory (err: " << err << ")\n\t" << "Size: " << (size / 1024)
                      << " (KB)" << " [" << size << " bytes]\n";

            g_exit(ExitCode::MemoryAllocationError);
        }

        return NULL;
    }

    // Deallocate memory
    void deallocate(T *obj_ptr, std::size_t obj_size) noexcept
    {
        unsigned long size = (obj_size * sizeof(T));

        try
        {
            ::operator delete(obj_ptr);
            total_allocated_memory -= size;
        }
        catch (int err)
        {
            std::cout << "Unexpected error while de-allocating memory (err: " << err << ")\n\t"
                      << "Size: " << (size / 1024) << " (KB)" << " [" << size << " bytes]\n\t"
                      << "At:" << obj_ptr << '\n';

            g_exit(ExitCode::MemoryDeallocationError);
        }
    }
};