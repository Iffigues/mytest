int main()
{
	char b[sizeof(int) + 4];
	*(int *)b = 400;
	b[sizeof(int)] = '5';
	printf("%d\n",*(int *)b);
	printf("%c\n",b[sizeof(int)]);
}
