

def get_greatest_common_divisor(a, b):
	big = max(a, b)
	small = min(a, b)

	if big % small == 0:
		return small

	for i in range(small//2, -1, -1):
		if big % i == 0 and small % i == 0:
			return i

	return 1


if __name__ == '__main__':
	assert(get_greatest_common_divisor(99, 55) == 11)
	assert(get_greatest_common_divisor(100, 75) == 25)