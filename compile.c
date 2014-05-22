/* ebasic.c - a simple basic interpreter
 *
 * Copyright (c) 2014 by David Michael Betz.  All rights reserved.
 *
 */

#include <stdio.h>
#include "db_compiler.h"
#include "db_system.h"
#include "db_image.h"

int main(int argc, char *argv[])
{
    ImageHdr *image = NULL;
    System *sys = NULL;
    VMVALUE code;

    InitImage(image);

    code = Compile(sys, image, VMFALSE);

    return 0;
}

System *InitSystem(uint8_t *freeSpace, size_t freeSize)
{
    return NULL;
}

uint8_t *AllocateFreeSpace(System *sys, size_t size)
{
    return NULL;
}

int GetLine(System *sys)
{
    return 0;
}

void VM_printf(const char *fmt, ...)
{
}

void Abort(System *sys, const char *fmt, ...)
{
}
