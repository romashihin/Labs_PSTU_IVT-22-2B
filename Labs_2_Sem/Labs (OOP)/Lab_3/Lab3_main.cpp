int main()
{
	Time a;
	Time b;
	Time c;
	cin >> a;
	cin >> b;
	c = a - b;
	cout << endl;
	if (a == b)
		cout << "Время равно" << endl;
	else
		cout << "Время не равно" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	--a;
	cout << "a = " << a << endl;
	return 0;
}
