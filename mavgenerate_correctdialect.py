#!/usr/bin/env python
"""\
mavgenerate_correctdialect.py 

corrects the #include in a generated dialect C header files to the required "../dialect/dialect.h"
assumes that it inlcudes only one #include
"""
import os
import re   

'''
this needs to be set correctly to the directory in which the generated C files are located
'''
mavlinkoutdir = "out_test"
mavlinkdialect = "storm32"



f = mavlinkdialect
dialectfile = mavlinkoutdir + "\\" + f + "\\" + f + ".h"


#check if there is alread a dialect.h.orig
#if so jump out with warning
# we cannot determine if this is so because mavgenerate_correctdialect.py  was run before
# or if a new generate was called and this is a left over of old generates

if os.path.exists(dialectfile+'.orig'):
    print('\n-----------\nA file '+dialectfile+'.orig'+' already exists\nWE thus TERMINATE!\n-----------\n')
    exit()

if True:
    print(dialectfile)
    F = open(dialectfile, 'r')
    fstr = F.read()
    F.close()
    #print(fstr)
    #get #include we need to correct
    # it is of the form
    '''
    // base include
    #include "../minimal/minimal.h"
    '''
    #x = re.search(r'base include\s+#include[ ]+"(.+)"', fstr)
    #print(x)
    fstr_corrected = re.sub(r'base include\s+#include[ ]+"(.+)"', 'base include\n#include "../'+f+'/'+f+'.h"', fstr)
    #print(fstr_corrected)
    F = open(dialectfile+'.orig', 'w')
    F.write(fstr)
    F.close()
    F = open(dialectfile, 'w')
    F.write(fstr_corrected)
    F.close()



