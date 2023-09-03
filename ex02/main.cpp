#include "Array.hpp"

int main(void)
{
	std::cout << "\033[32mTest int arr\033[0m" << std::endl << std::endl;
	try 
	{
        // Create an empty array
        Array<int> emptyArray;

        // Create an array of size 5
        Array<int> intArray(5);

        // Assign values to array elements
        for (unsigned int i = 0; i < intArray.size(); i++) 
            intArray[i] = i * 2;

        // Print array elements
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        // Access an out-of-bounds element (will throw an exception)
        std::cout << intArray[10] << std::endl;
    } 
	catch (const std::exception& e) 
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << "\033[32mTest char arr\033[0m" << std::endl << std::endl;
	
	// Create an array of size 5
	Array<char> charArray(5);


	// Assign values to array elements
	for (unsigned int i = 0; i < charArray.size(); i++) 
		charArray[i] = 'A' + i;

	// Print array elements
	for (unsigned int i = 0; i < charArray.size(); i++)
		std::cout << charArray[i] << " ";
	std::cout << std::endl;
	Array<char> charArray2(charArray);
	std::cout << charArray[0] << std::endl;
	try 
	{
        // Access an out-of-bounds element (will throw an exception)
        std::cout << charArray[10] << std::endl;
    } 
	catch (const std::exception& e) 
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	return (0);
}

