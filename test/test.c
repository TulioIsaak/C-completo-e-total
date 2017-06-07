#include <stdio.h>

void loop (int a, int *var);
void partition (void);

void main (void) {

	int x, y[] = {100, 200, 300, 400, 500, 600, 700}, *p1, *p2, *p3, *p4, **q1, **q2, **q3, **q4;

	x = 10;
	
	p4 = &x;
	q4 = &p4;

	p1 = &x;
	p2 = p1;
	p3 = p1;
	
	q1 = &p1;
	q2 = &p2;
	q3 = &p3;
	
	partition();
	partition();
	partition();

	printf("&p4 (d) = %d, &p4 (p) = %p, p4 (d) = %d, p4 (p) = %p"/*, *p4 (d) = %d, *p4 (p) = %p\n"*/, &p4, &p4, p4, p4/*, *p4, *p4 */);

	partition();

	printf("%p\n", &q4);

	partition();

	partition();
	printf("x = %d, p1 = %d, p2 = %d, p3 = %d, q1 = %d, q2 = %d, q3 = %d\n", x, *p1, *p2, *p3, **q1, **q2, **q3);

	//partition();
	//loop(7, &y);

	partition();
	printf("p1 (d) = %d, p2 (d) = %d, p3 (d) = %d\n", p1, p2, p3);

	partition();
	printf("p1 (p) = %p, p2 (p) = %p, p3 (p) = %p\n", p1, p2, p3);
	
	partition();
	printf("*p1 (d) = %d, *p2 (d) = %d, *p3 (d) = %d\n", *p1, *p2, *p3);

	partition();
	printf("*p1 (p) = %p, *p2 (p) = %p, *p3 (p) = %p\n", *p1, *p2, *p3);

	partition();
	printf("&p1 (d) = %d, &p2 (d) = %d, &p3 (d) = %d\n", &p1, &p2, &p3);

	partition();
	printf("&p1 (p) = %p, &p2 (p) = %p, &p3 (p) = %p\n", &p1, &p2, &p3);

	partition();

//////////////////////////////////////////////////////////

	partition();
	printf("q1 (d) = %d, q2 (d) = %d, q3 (d) = %d\n", q1, q2, q3);

	partition();
	printf("q1 (p) = %p, q2 (p) = %p, q3 (p) = %p\n", q1, q2, q3);
	
	partition();
	printf("*q1 (d) = %d, *q2 (d) = %d, *q3 (d) = %d\n", *q1, *q2, *q3);

	partition();
	printf("*q1 (p) = %p, *q2 (p) = %p, *q3 (p) = %p\n", *q1, *q2, *q3);

	partition();
	printf("&q1 (d) = %d, &q2 (d) = %d, &q3 (d) = %d\n", &q1, &q2, &q3);

	partition();
	printf("&q1 (p) = %p, &q2 (p) = %p, &q3 (p) = %p\n", &q1, &q2, &q3);

	partition();
	printf("**q1 (d) = %d, **q2 (d) = %d, **q3 (d) = %d\n", **q1, **q2, **q3);

	partition();
	printf("**q1 (p) = %p, **q2 (p) = %p, **q3 (p) = %p\n", **q1, **q2, **q3);

	/*partition();
	printf("&&q1 (d) = %d, &&q2 (d) = %d, &&q3 (d) = %d\n", &&q1, &&q2, &&q3);

	partition();
	printf("&&q1 (p) = %p, &&q2 (p) = %p, &&q3 (p) = %p\n", &&q1, &&q2, &&q3);
	*/
	partition();

}

void loop (int a, int *var) {
	for (int i = 0; *var; ++i)
	{
		printf("y[%d] = %d ", (i + 1), *var++);
	}
	printf("\n");
}

void partition (void) {
	int i=80;
	while(i) {
		printf("=");
		i--;
	}
	printf("\n");
}