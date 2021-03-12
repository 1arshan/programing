#include<P89V51RX2.H>

void delay(unsigned int del)
{
	unsigned int i,j;
	for(i=0;i<1000;i++)
		for( j=0;j<=del;j++);
}

void main()
{
	while(1)
	{
		delay(20);
		RxD=0;
		TxD=0;
		delay(20);
		RxD=1;
		TxD=1;
	}
}