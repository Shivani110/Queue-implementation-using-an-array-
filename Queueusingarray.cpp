#include <bits/stdc++.h>
using namespace std;

struct queuearray {
	int a, z, x;
	int* qu;
	queuearray(int n)
	{
		a = z = 0;
		x = n;
		qu = new int;
	}

	~queuearray() 
	{ 
	 delete[] qu; 
	}
	void enq(int i)
	{
		if (x == i) 
		{
			printf("\n Full\n");
			return;
		}
		else 
		{
			qu[z] = i;
			z++;
		}
		return;
	}
	void deq()
	{
		if (a == z) 
		{
			printf("\n Empty\n");
			return;
	   }
		else 
		{
			for (int p = 0; p < z - 1; p++) 
			{
				qu[p] = qu[p + 1];
			}
			z--;
		}
		return;
	}
	void quprint()
	{
		int p;
		if (a == z) 
		{
			printf("\nEmpty\n");
			return;
		}
		for (p = a; p < z; p++) 
		{
			printf(" %d <-- ", qu[p]);
		}
		return;
	}
	void qufr()
	{
		if (a == z) 
		{
			printf("\n Empty\n");
			return;
		}
		printf("\nFront element of the Queue is: %d", qu[a]);
		return;
	}
};
int main(void)
{
	queuearray ob(6);
	ob.quprint();
	ob.enq(10);
	ob.enq(20);
	ob.enq(30);
	ob.enq(40);
	ob.enq(50);
	ob.enq(60);
	ob.quprint();
    ob.deq();
	ob.deq();
	ob.deq();

	printf("\n\n After deleting three nodes the Queue is:\n\n");
	ob.quprint();
	ob.qufr();

	return 0;
}

