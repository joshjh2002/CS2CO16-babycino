#include <stdio.h>
#include <stdlib.h>

union ilword {
    int n;
    union ilword* ptr;
    void(*f)();
};
typedef union ilword word;

word param[1];
int next_param = 0;

word r0 = {0};

word vg0 = {0};
word vg1 = {0};
word vg2 = {0};
void INIT();
void MAIN();
void Test_f();
int main() {
    INIT();
    MAIN();
    return 0;
}

void INIT() {
    word vl[0];
    word r4 = {0};
    word r3 = {0};
    word r2 = {0};
    word r1 = {0};
    int p;
    for(p = 0; p <= -1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
INIT:
    r2.n = 0;
    vg0.ptr = calloc(r2.n, sizeof(word));
    r2.n = 0;
    vg1.ptr = calloc(r2.n, sizeof(word));
    r2.n = 1;
    vg2.ptr = calloc(r2.n, sizeof(word));
    r3 = vg2;
    r4.f = &Test_f;
    *(r3.ptr) = r4;
    return;
}

void MAIN() {
    word vl[0];
    word r7 = {0};
    word r6 = {0};
    word r5 = {0};
    word r4 = {0};
    word r3 = {0};
    word r2 = {0};
    word r1 = {0};
    int p;
    for(p = 0; p <= -1 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
MAIN:
    r1.n = 1;
    r2.ptr = calloc(r1.n, sizeof(word));
    *(r2.ptr) = vg2;
    r3 = *(r2.ptr);
    r4.n = 0;
    r5.ptr = r3.ptr + r4.n;
    r6 = *(r5.ptr);
    param[next_param++] = r2;
    (*(r6.f))();
    r7 = r0;
    printf("%d\n", r7.n);
    return;
}

void Test_f() {
    word vl[4] = {0,0,0,0};
    word r17 = {0};
    word r16 = {0};
    word r15 = {0};
    word r14 = {0};
    word r13 = {0};
    word r12 = {0};
    word r11 = {0};
    word r10 = {0};
    word r9 = {0};
    word r8 = {0};
    word r7 = {0};
    word r6 = {0};
    word r5 = {0};
    word r4 = {0};
    word r3 = {0};
    word r2 = {0};
    word r1 = {0};
    int p;
    for(p = 0; p <= 3 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
Test_f:
    vl[1].n = 0;
    vl[2].n = 1;
    vl[3].n = 0;
Test_f_0:
    r4.n = 1;
    r5 = vl[3];
    r6 = r4;
    r7.n = r5.n - r6.n;
    if (r7.n == 0) goto Test_f_1;
    r8.n = 1;
    goto Test_f_2;
Test_f_1:
    r8.n = 0;
Test_f_2:
    if (r8.n == 0) goto Test_f_7;
    r9.n = vl[1].n + vl[2].n;
    vl[1] = r9;
    r10.n = 10;
    r11 = vl[2];
    r12 = r10;
    r13.n = r11.n - r12.n;
    if (r13.n == 0) goto Test_f_3;
    r14.n = 1;
    goto Test_f_4;
Test_f_3:
    r14.n = 0;
Test_f_4:
    if (r14.n == 0) goto Test_f_5;
    r15.n = 0;
    goto Test_f_6;
Test_f_5:
    r15.n = 1;
Test_f_6:
    vl[3] = r15;
    r16.n = 1;
    r17.n = vl[2].n + r16.n;
    vl[2] = r17;
    goto Test_f_0;
Test_f_7:
    r0 = vl[1];
    return;
}

