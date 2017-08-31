class static_test
{
	static int statycznePoleInt;
	int poleInt;

public:
	static_test(int _poleInt);
	~static_test();

	static int funkcjaStatic();
	int funkcja();
};