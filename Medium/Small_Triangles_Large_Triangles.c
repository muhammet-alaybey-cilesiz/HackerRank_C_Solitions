#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double triangle_area(triangle* tr){
    int a = tr->a, b = tr->b, c = tr->c;
    
    double p = (a + b + c) / 2.0 ;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    
    return s;    
}

int compare_triangle_areas(const void* x, const void* y){
    const triangle* t1 = (const triangle*) x;
    const triangle* t2 = (const triangle*) y;
    
    double area1 = triangle_area(t1);
    double area2 = triangle_area(t2);
    
    if(area1 < area2) return -1;
    if(area1 > area2) return  1;
    return 0;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    qsort(tr, n, sizeof(triangle), compare_triangle_areas);
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}