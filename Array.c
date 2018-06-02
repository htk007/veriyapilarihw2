#include <stdio.h>
#include <Array.h>

/* Operations */
void Array_Assign(Array *ds, int x, char d) {

	if(ds->a[x] == ' ') { ds->n ++; }
	ds->a[x] = d;
}

void Array_Delete(Array *ds, int x) {

    ds->a[x] =' ';
	/* TODO */
}

char Array_Query(Array *ds, int x) {

    return ds->a[x];
	/* TODO */
}

int  Array_Contains(Array *ds, char d) {
     int i;
    for (i=0; i < 10; i++) {
        if (ds->a[i] == d)
            return 1;
    }
    return 0;
}

char Array_Min(Array *ds) {

	/* TODO */
}

int  Array_Count(Array *ds) {

	return ds->n;
}

/* Auxillary methods */
void Array_initalize(Array *ds) {

	int i;

	ds -> n = 0;
	for(i=0; i<10; i++) { ds -> a[i] = ' '; }
}

void Array_finalize(Array *ds) {

	/* there is nothing to do */
}

void Array_print(Array *ds) {

	int i;

	printf(" "); for(i=0; i<10; i++) { printf("_ "); }            printf("   ___ \n");
	printf("|"); for(i=0; i<10; i++) { printf("%c|", ds->a[i]); } printf("  |%2d |\n",ds->n);
	printf(" "); for(i=0; i<10; i++) { printf("%1d ",i); }        printf("    n \n");
}
