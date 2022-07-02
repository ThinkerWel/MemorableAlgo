int main(void)
{

	Stack ark(5);
	int x = 1;
	while (!ark.isfull())
		ark.push(x++);
	
	Item item;
	while (ark.pop(item))
		std::cout <<" "<< item;

}
