#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/*
** forward declaration
*/
int binary(uint8_t i);


/*
** program entry
*/

int main(int argc, char **argv)
{
	int x=4,y=5,z=5;

	/* testing for equal  use == */
	printf("1. Testing ==\n\n");
	if( x == y ) {
		printf("%d == %d is true\n",x,y);
	} else {
		printf("%d == %d is false\n",x,y);
	}
	printf("\n");

	printf("2. Testing =\n\n");
	/*NB = is an assignment!!!!! */
	if( (x = y) ) {
		printf("%d = %d is true\n",x,y);
	} else {
		printf("%d = %d is false\n",x,y);
	}
	printf("\n");

	printf("3. Testing ==\n\n");
	if( 4 == 5 ) {
		printf("4 == 5 is true\n");
	} else {
		printf("4 == 5 is false\n");
	}
	printf("\n");

	printf("3. Testing <=\n\n");
	if( 4 <= 5 ) {
		printf("4 <= 5 is true\n");
	} else {
		printf("4 <= 5 is false\n");
	}
	printf("\n");

	printf("4. Testing >=\n\n");
	if( 4 >= 5 ) {
		printf("4 >= 5 is true\n");
	} else {
		printf("4 >= 5 is false\n");
	}
	printf("\n");

	printf("5. Testing !=\n\n");
	if( 4 != 5 ) {
		printf("4 != 5 is true\n");
	} else { 
		printf("4 != 5 is false\n");
	}
	printf("\n");

	printf("6. Testing 1\n\n");
	if( 1 ) {
		printf("1 is true\n");
	} else {
		printf("1 is false\n");
	}

	printf("7. Testing 0\n\n");
	if( 0 ) {
		printf("0 is true\n");
	}  else {
		printf("0 is false\n");
	}
	printf("\n");

	printf("8. Testing !1\n\n");
	if( !1 ) {
		printf("!1 is true\n");
	} else {
		printf("!1 is false\n");
	}
	printf("\n");

	printf("9. Testing !0\n\n");
	if( !0 ) {
		printf("!0 is true\n");
	}  else {
		printf("!0 is false\n");
	}
	printf("\n");

	printf("10. Testing -1\n\n");
	if( -1 ) {
		printf("-1 is true\n");
	} else {
		printf("-1 is false\n");
	}

	printf("11. Testing 0 && 0\n\n");
	if( 0 && 0 ) {
		printf("0 && 0 is true\n");
	}  else {
		printf("0 && 0 is false\n");
	}
	printf("\n");

	printf("12. Testing 1 && 0\n\n");
	if( 1 && 0 ) {
		printf("1 && 0 is true\n");
	}  else {
		printf("1 && 0 is false\n");
	}

	printf("13. Testing 1 && 1\n\n");
	if( 1 && 1 ) {
		printf("1 && 1 is true\n");
	}  else {
		printf("1 && 1 is false\n");
	}
	printf("\n");

	printf("14. Testing 0 || 0\n\n");
	if( 0 || 0 ) {
		printf("0 || 0 is true\n");
	}  else {
		printf("0 || 0 is false\n");
	}
	printf("\n");

	printf("15. Testing 1 || 0\n\n");
	if( 1 || 0 ) {
		printf("1 || 0 is true\n");
	}  else {
		printf("1 || 0 is false\n");
	}
	printf("\n");

	printf("16. Testing 1 || 1\n\n");
	if( 1 || 1 ) {
		printf("1 || 1 is true\n");
	}  else {
		printf("1 || 1 is false\n");
	}
	printf("\n");

	printf("17. Loop testing == \n\n");
	for(int i=0; i < 10; i++ ) {
		if( i == 5 ) {
			printf("%d == 5 is true\n",i);
		} else {
			printf("%d == 5 is false\n",i);
		}
	}
	printf("\n");
	
	int a = 12, b = 25;
	printf("a (%d) = %08d\n",a,binary(a));
	printf("b (%d) = %08d\n",b,binary(b));
	printf("\n");

	printf("18. Operator &\n\n");
        printf("a AND B, a&b \n  %08d\n& %08d\n  %08d\n",binary(a),binary(b), binary( a & b));
	printf("\n");
	
	printf("19. Operator | (OR)\n\n");
        printf("a OR B, a|b \n  %08d\n| %08d\n  %08d\n",binary(a),binary(b), binary(a | b));
	printf("\n");

	printf("20. Operator ^ (XOR)\n\n");
        printf("a XOR B, a^b, \n  %08d\n^ %08d\n  %08d\n",binary(a),binary(b), binary( a ^ b));
	printf("\n");

	printf("21. Operator ~ (COMPLEMENT)\n\n");
        printf("a's complement, ~a, ~%08d = %08d\n",binary(a),  binary(~a));
	printf("\n");

	printf("22. Operator ~ (COMPLEMENT)\n\n");
        printf("b's complement, ~%08d = %08d\n",binary(b), binary( ~b));
	printf("\n");

	int c = 1;
	printf("23. Operator << (LEFT SHIFT)\n\n");
	printf("%d = %08d\n",c,binary(c));

	/* loop */
	for(int i=1;i<8;i++) {
		printf("%d<<%d = (%d),  %08d\n",c,i, c<<i,binary(c<<i));
	}
	printf("\n");

	printf("24. Operator >> (RIGHT SHIFT)\n\n");
	c = 128;
	printf("%d = %08d\n",c,binary(c));

	/* loop */
	for(int i=1;i<8;i++) {
		printf("%d>>%d = %d, %08d\n",c,i, c>>i,binary(c>>i));
	}

	return 0;
}

/* 
** utility to convert a number to binary representation 
*/

int binary(uint8_t i)
{
    int bigEndian = 1;
    int j=0,m = bigEndian ? 1 : 10000000;
    while (i) {
        j+=m*(i%2);
        if (bigEndian) m*=10; else m/=10;
        i >>= 1;
    }
    return j;
}

