#include <stdio.h>
struct point {
    int x;
    int y;
};
struct line {
    struct point* p1;
    struct point* p2;
};

// translatePoint function goes here
//struct point translatePoint(struct point p, int xShift, int yShift) {
//    p.x = &p.x + xShift;
//    p.y = &p.y + yShift;
//}

/* close...
void translatePoint(struct point p, int xShift, int yShift) {
    p.x = p.x + xShift;
    p.y = p.y + yShift;
}
*/
struct point* translatePoint(struct point p, int xShift, int yShift) {
    p.x = p.x + xShift;
    p.y = p.y + yShift;
    return &p;//wrong
}


int main() {
    struct point a;
    a.x = 5;
    a.y = 8;

    struct point b;
    b.x = 1;
    b.y = 2;

    struct line c;
    c.p1 = &a;
    c.p2 = &b;

    printf("line: (%d %d) - (%d %d)\n",
           (*(c.p1)).x, (*(c.p1)).y,
           (*(c.p2)).x, (*(c.p2)).y);

    // Call to translatePoint goes here
    translatePoint(a,2,3);
    
    
    
    printf("line: (%d %d) - (%d %d)\n",
           (*(c.p1)).x, (*(c.p1)).y,
           (*(c.p2)).x, (*(c.p2)).y);

    return 0;
}






