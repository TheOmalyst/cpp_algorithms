int get_max_count_element(vector<int> numbers)
{
	int vector_len = numbers.size();
	if (vector_len <= 0) return -1;

	sort(numbers);

	int max_count_element = numbers[0];
	int max_count = 1;
	for (int i = 1, curr_element = numbers[0], count = 1; i < vector_len; ++i)
	{
		bool reset_curr_element = false;

		if (curr_element == numbers[i]) count++;
		else reset_curr_element = true;

		if (count > max_count)
		{
			max_count = count;
			max_count_element = curr_element;
		}

		if (reset_curr_element)
		{
			curr_element = numbers[i];
			count = 1;
		}
	}

	return max_count_element;
}