#include<iostream>

using namespace std;

class base
{
	public:
		void show()
		{
			cout<<"show base\n";
		}
};

int main()
{
	base *ptr=new base();
	ptr->show();

	return 0;
}
