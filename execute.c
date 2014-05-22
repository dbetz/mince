/* ebasic.c - a simple basic interpreter
 *
 * Copyright (c) 2014 by David Michael Betz.  All rights reserved.
 *
 */

#include <stdio.h>
#include "db_compiler.h"
#include "db_image.h"
#include "db_vm.h"
#include "db_edit.h"

int main(int argc, char *argv[])
{
    System *sys = NULL;
    ImageHdr *image = NULL;
    VMVALUE code = 0;

    Execute(sys, image, code);

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

void VM_printf(const char *fmt, ...)
{
}

void Abort(System *sys, const char *fmt, ...)
{
}
