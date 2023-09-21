# include<iostream>
using namespace std;
int main()
{
	/*int a[] = { 2,4,6,7,1 };
	float b[] = { 2.5f,5.6f };
	char c[] = { 'A',66,'B',68 };
	for (auto x:a)
	{
		cout << ++x << endl;
	}*/
	/*int a[] = { 2,4,6,7,1 };
	int sum = 0;
	for (auto i : a)
	{
		sum = sum + i;

	}
	cout << sum << endl;
	return 0;*/
	/*int a[][5] = { { 1,2,3,5 } };
	for (auto &i : a)
		for(auto num:i)
	{
		cout << num << endl;
	}*/
	/*int a[] = { 1,4,6,2,7,4 };
	int n = 0;
	for (auto i : a)
	{
		if (i > n)
		{
			n = i;
		}

	}
	cout << n << endl;*/
	//1.线性查找
		//int a[] = { 2,4,7,9,123,86,9,34 };
		//cout << "enter numbers" << endl;
		//for (auto &i : a)
		//{
		//	cin >> i;
		//}
		//cout << "enter key" << endl;
		//int key;
		//cin >> key;
		//for (auto i = 0;i < sizeof(a)/sizeof(a[0]); i++)
		//{
		//	if (key == a[i])
		//	{
		//		cout << "found" << i << endl;
		//		return 0;
		//	}
		//	
		//}
		//cout << "not found" << endl;
	//2.二分查找(必须顺序排序)
		/*int a[] = { 2,3,52,64,83,321,421 };
		int temp = 0;
		int l= 0, h = sizeof(a)/sizeof(a[0]), mid;
		cout << "enter key" << endl;
		cin >> temp;
		for (int i = 0 ;i < sizeof(a) / sizeof(a[0]);i++)
		{
			mid = (l + h) / 2;
			if (temp == a[mid])
			{
				cout << "found index:" << mid << endl;
				return 0;
			}
			else if (temp < a[mid]) h = mid - 1;
			else l = mid + 1;
		}
		cout << "not found" << endl;*/
		//嵌套循环
	//int count = 1;
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		cout << count;
	//		count++;
	//	}
	//	cout << endl;  // 这行现在是外部循环的一部分
	//}
//	for(int i = 0;i<4;i++){
//		for (int j = 1; j < 4; j++)
//		{
//			if (i + j > 5) cout << "* ";
//			else cout << " ";
//		}
//		
//	cout << endl;
//}
	//int A[][3] = { 3,3,3,3,3,3 };
	//int B[][3] = { 2,2,2,2,2,2 };
	//int C[2][3];
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		C[i][j] = A[i][j] * B[i][j];
	//	}
	//}

	//for (auto& i : C)
	//{
	//	for (auto j : i)
	//		cout << j << " ";
	//	cout << endl;
	//}
	
}

