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
    word vl[3] = {0,0,0};
    word r18 = {0};
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
    for(p = 0; p <= 2 && p < 1; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
Test_f:
    vl[1].n = 0;
    vl[2].n = 1;
Test_f_0:
    r4.n = 1;
    r5.n = 0;
    r6 = r4;
    r7 = r5;
    r8.n = r6.n - r7.n;
    if (r8.n == 0) goto Test_f_1;
    r9.n = 1;
    goto Test_f_2;
Test_f_1:
    r9.n = 0;
Test_f_2:
    if (r9.n == 0) goto Test_f_7;
    r10.n = vl[1].n + vl[2].n;
    vl[1] = r10;
    r11.n = 10;
    r12 = vl[2];
    r13 = r11;
    r14.n = r12.n - r13.n;
    if (r14.n == 0) goto Test_f_3;
    r15.n = 1;
    goto Test_f_4;
Test_f_3:
    r15.n = 0;
Test_f_4:
    if (r15.n == 0) goto Test_f_5;
    goto Test_f_6;
Test_f_5:
Test_f_6:
    r17.n = 1;
    r18.n = vl[2].n + r17.n;
    vl[2] = r18;
    goto Test_f_0;
Test_f_7:
    r0 = vl[1];
    return;
}

