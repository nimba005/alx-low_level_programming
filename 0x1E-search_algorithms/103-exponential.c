#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers using binary search
 * @array: Poiunter to the array has our elements
 * @left: Left part of our subarray
 * @right: right part of our subarray
 * @value: value to search
 * Return: NULL if not found, -1, otherwise index of the element
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t n;
	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (n = left; n < right; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = left + (right - left) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			right = n - 1;
		else
			left = n + 1;
	}
	return (-1);
}
/**
 * exponetial_search - Searches for a value in a sorted array of integers using binary search
 * @array: Poiunter to the array has our elements
 * @array: Poiunter to the array has our elements
 * @size: number of elements in an array
 * @value: value to search
 * Return: NULL if not found, -1, otherwise index of the element
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t f = 0, right;
	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (f = 1; f < size && array[f] <= value; f = f * 2)
			printf("Value checked array[%ld] = [%d]\n", f, array[f]);
	}
	right = f < size ? f : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", f / 2, right);
	return (_binary_search(array, f / 2, right, value));
}
