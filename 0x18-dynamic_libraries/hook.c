
int rand(void);

int rand(void)
{
	static int idx = -1;

	idx++;

	if (idx == 0)
		return 8;
	if (idx == 1)
		return 8;
	if (idx == 2)
		return 7;
	if (idx == 3)
		return 9;
	if (idx == 4)
		return 23;
	if (idx == 5)
		return 74;
	
}
