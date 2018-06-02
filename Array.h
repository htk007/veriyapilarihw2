#ifndef _ARRAY_H_
#define _ARRAY_H_

/* Definition */
typedef struct array_data {

	int n;
	char a[10];
	int minValue;
}Array;

/* Operations
void Array_Assign(Array *ds, int x, char d);
void Array_Delete(Array *ds, int x);
char Array_Query(Array *ds, int x);
int  Array_Contains(Array *ds, char d);
char Array_Min(Array *ds);
int  Array_Count(Array *ds);*/

/* Auxillary methods
void Array_initalize(Array *ds);
void Array_finalize(Array *ds);
void Array_print(Array *ds);
*/
#endif
