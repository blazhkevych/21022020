#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
	const int size = 100;
	int arr[size]{ };
	int n;
	cout << "Count elements = ";
	cin >> n;
	if (n < 1 || n > size)
	{
		cout << "Error" << endl;
		return 0;
	}
	srand(time(0));
	int b = 10;
	int a = -10;
	for (int i = 0; i < n; i++)
		arr[i] = a + rand() % (b - a + 1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\t';


	int k = 0;
	for (int i = 1; i < n - 1; i++)
		if (arr[i - 1] > arr[i]) k++;

	cout << " ! " << k << endl;
}

/*const int size = 100;
	int arr[size]{ };
	int n;
	cout << "Count elements = ";
	cin >> n;
	if (n < 1 || n > size)
	{
		cout << "Error" << endl;
		return 0;
	}
	srand(time(0));
	int b = 10;
	int a = -10;
	for (int i = 0; i < n; i++)
		arr[i] = a + rand() % (b - a + 1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\t';

	int k = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == 0) k++;
	int k2 = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > 0) k2++;
	int k3 = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] < 0) k3++;
	cout << "nuli= " << k << "\nPozutuvnuh= " << k2 << "\nNegatuvnuh= " << k3 << endl;*/

	//arr[i] = rand()%(b-a+1); 3...11

	/*	arr[i] = rand()%(b+1);*/ //0-10 рандомні числа

	/*const int size = 100;
		int arr[size]{ };
		int n;
		cout << "Count elements = ";
		cin >> n;
		if (n < 1 || n > size)
		{
			cout << "Error" << endl;
			return 0;
		}
		for (int i = 0; i < n; i++)
		{
			cout << "Enter arr[" << i << "]=";
			cin >> arr[i];
		}
		double s = 0;
		double avg = s / n;
		for (int i = 0; i < n; i++)
		{
			s = s + arr[i];
		}
		cout << "sum = " << s << endl;
		cout << "avg = " << avg << endl;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > avg)
				count++;
		}
		cout << "count = " << count << endl;*/

		/*const int size = 100;
			int arr[size]{ };
			int n;
			cout << "Count elements = ";
			cin >> n;
			if (n < 1 || n > size)
			{
				cout << "Error" << endl;
				return 0;
			}
			for (int i = 0; i < n; i++)
			{
				cout << "Enter arr[" << i << "]=";
				cin >> arr[i];
			}
			double s = 0;
			for (int i = 0; i < n; i++)
			{
				s = s + arr[i];
			}
			cout << "sum = " << s << endl;
			cout << "avg = " << s / n << endl;*/

			/*const int n = 10;
				int arr[n]{ };
				double s = 0;
				for (int i = 0; i < n; i++)
				{
					cout << "Enter arr[" << i << "]="; //ввід в масив
					cin >> arr[i];
				}
				for (int i = 0; i < n; i++)
					cout << arr[i] << '\t';
				for (int i = 0; i < n; i++)

					for (int i = 0; i < n; i++)
						s = s + arr[i];
				cout << "sum = " << s << endl;
				cout << "avg = " << s / n << endl;*/

				/*SetConsoleOutputCP(1251);
					cout << "Вычисление среднего арифметического\n";
					int i;
					double sum = 0, number;
					cout << "Вводите последовательность. После ввода каждого числа нажимайте <Enter>\n";
					for ( i = 0; ; i++)
					{
						cout << "->";
						cin >> number;
						sum = sum + number;
						if (number == 0)break;
					}
					cout << "Среднее арифметическое введенной последовательности: " << sum / i << endl;*/