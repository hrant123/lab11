#pragma once
#include <stdlib.h>

#define OpenFiles(f1,m1,f2,m2) \
f1 = fopen("f1.txt",m1);\
f2 = fopen("f2.txt",m2);
